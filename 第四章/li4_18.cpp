#include<iostream>
int main(){
    using namespace std;
    double *p=new double[3];//使用new申请长度为3的浮点数数组
    p[0]=0.2; p[1]=0.5; p[2]=0.8;
    cout<<p[0]<<" "<<p[1]<<" "<<p[2]<<endl;//0.2 0.5 0.8
    p=p+1;//此时p指向数组第二个元素
    cout<<p[0]<<" "<<p[1]<<endl;//0.5 0.8
    p=p-1;//p重新指向数组第一个元素
    delete []p;
    return 0;
}