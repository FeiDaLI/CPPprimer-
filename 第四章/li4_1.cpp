#include<iostream>
int main(){
    using namespace std;
    int a[3]; //创建一个3个元素的数组
    a[0]=7; a[1]=8; a[2]=6;
    int b[3]={1,2,3};//初始化数组
    cout<<a[0]+a[1]+a[2]<<endl;
    cout<<b[0]<<b[1]<<b[2]<<endl;
    cout<<sizeof a[0]<<endl;
    cout<<sizeof a<<endl; 
}
/*
21
123
4
12
*/