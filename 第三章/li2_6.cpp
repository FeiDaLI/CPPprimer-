#include<iostream>
//函数原型
int stonetolb(int);
int main(){
    //using也可以放在函数体内  
    using namespace std;
    int stone;
    cout<<"Enter the weight in stone:";
    cin>>stone;
    int pounds = stonetolb(stone);
    cout<<stone<<"Stnoe = ";
    cout<<pounds<<"pounds."<<endl;
    return 0;
}
//函数定义
int stonetolb(int sts){
    return 14*sts;
}