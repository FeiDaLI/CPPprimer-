#include<iostream>
int main(){
    using namespace std;
    int a=7;
    double d=4.5;
    cout<<a<<" "<<&a<<endl;
    cout<<d<<" "<<&d<<endl;
    return 0;
}
/*
7 0x62fe1c
4.5 0x62fe10
*/