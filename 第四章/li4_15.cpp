#include<iostream>
int main(){
    using namespace std;
    int a = 6;
    int *p;
    p=&a;
    cout<<a<<" "<<*p<<endl;//值
    cout<<&a<<" "<<p<<endl;//地址
    *p = *p+1;//使用指针修改数
    cout<<a;
    return 0;
}
/*
6 6
0x62fe04 0x62fe04
7
*/