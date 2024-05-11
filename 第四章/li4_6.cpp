#include<iostream>
int main(){
    using namespace std;
    cout<<"What year?"<<endl;
    int year;
    cin>>year;
    //(cin>>year).get();
    cout<<"what name";
    char name[10];
    cin.getline(name,10);
    cout<<name<<endl;
    return 0;
}
/*
cin读取年份,回车键生成的换行符留在输入队列。
cin.getline()看到换行符以为是一个空行，将空字符串赋给name
解决
(cin>>year).get();

*/