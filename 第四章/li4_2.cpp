#include<iostream>
#include<cstring>
int main(){
    using namespace std;
    const int Size = 15;
    char name1[Size];
    char name2[Size]="C++123";
    cout<<name2<<endl;//输出字符串
    cin>>name1;//输入字符串
    cout<<name1<<endl;//打印字符串
    cout<<strlen(name1);//字符串长度(不包括空格)
    name2[3]='\0';
    cout<<name2<<endl;//打印时遇到空格结束
    return 0;
}