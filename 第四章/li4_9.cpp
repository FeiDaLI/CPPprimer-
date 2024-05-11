#include<iostream>
#include<string>
#include<cstring>
int main(){
    using namespace std;
    char charr1[20];
    char charr2[20]="abcd";
    string str1;
    string str2="efdh";
    str1=str2; //C++字符串拷贝
    strcpy(charr1,charr2);//C字符串拷贝
    str1+="paste";//C++字符串拼接
    strcat(charr1,"popop");//C字符串拼接
    int len1=str1.size();//C++字符串长度
    int len2=strlen(charr1);//C字符串长度
    cout<<str1<<" "<<len1<<endl;
    cout<<charr1<<" "<<len2<<endl;
    return 0;
}