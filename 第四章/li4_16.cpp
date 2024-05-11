#include<iostream>
int main(){
    using namespace std;
    int a=5;
    int *p=&a;//将指针初始化为一个地址
    cout<<a<<" "<<*p<<endl;
    cout<<p<<" "<<&a<<endl;
    return 0;
}
/*
5 5
0x62fe04 0x62fe04

*/