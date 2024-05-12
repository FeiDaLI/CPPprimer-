#include<iostream>
#include<cstring>
int main(){
    using namespace std;
    char word[5]="?ate";
    for(char ch='a';strcmp(word,"mate");ch++){
        cout<<word<<endl;
        word[0]=ch;
    }
    //使用strcmp()比较字符串大小.
    return 0;
}