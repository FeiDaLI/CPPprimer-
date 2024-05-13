#include<iostream>
const int ArSize = 8;
/*
函数参数位数组f(int a[],int n);
需要传入数组长度.
*/
int sum_arr(int arr[],int n);
int main(){
    using namespace std;
    int cookies[ArSize]={1,2,4,8,16,32,64,128};
    int sum = sum_arr(cookies,ArSize);
    cout<<"Total cookies eaten:"<<sum<<endl;
    return 0;
}
int sum_arr(int arr[],int n){
    int total = 0;
    for(int i=0;i<n;i++) total+=arr[i];
    return total;
}

