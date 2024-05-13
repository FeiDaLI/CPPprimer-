#include<iostream>
unsigned int c_in_str(const char *str,char ch);
//unsigned int c_in_str(const char str[],char ch);//also okay.

int main(){
    using namespace std;
    char s1[15]="minimum";
    char *s2 ="ululate";
    unsigned int ms = c_in_str(s1,'m');
    unsigned int us = c_in_str(s2,'u');
    cout<<ms<<" "<<s1<<endl;
    cout<<us<<" "<<s2<<endl;
    return 0;
}
unsigned int c_in_str(const char *str,char ch){
    unsigned int count=0;
    while(*str){//当*str='\0'退出循环.
        if(*str==ch)count++;
        str++;
    }
    return count;
}
/*
   参数传入字符串，传入的是字符串的首地址.
*/
