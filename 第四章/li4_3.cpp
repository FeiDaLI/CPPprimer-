#include<iostream>
int main(){
    using namespace std;
    const int ArSize=20;
    char name[ArSize];
    char dessert[ArSize];
    cout<<"Enter your name:\n";
    cin>>name;
    cout<<"Enter your favorite dessert:\n";
    cin>>dessert;
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<endl;
    return 0;
}
/*
如果一次输入两个及以上的单词时，会以空格分隔。不符合需求
可以使用cin.getline()或者cin.get()见li4_4.
*/