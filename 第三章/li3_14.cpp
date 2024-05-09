#include<iostream>
int main(){
    using namespace std;
    int a,b,c;
    a = 19.99+11.99;//浮点数转为int
    b = (int)19.99+(int)11.99;//C语言的强制类型转换
    c = int(19.99)+int(11.99);//C++的语法
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    char ch='Z';
    cout<<ch<<endl;
    cout<<int(ch)<<endl;//char强转int
    cout<<static_cast<int>(ch)<<endl;//使用static_cast强制类型转换
    return 0;
}
/*
31
30
30
Z
90
90
*/