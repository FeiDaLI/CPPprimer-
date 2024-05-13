#include<iostream>
const int ArSize = 8;
//传入数组.
int sum_arr(int arr[],int n);

int main(){
    int cookies[ArSize] = {1,2,4,8,16,32,64,128};
    std::cout<<cookies<<" =array address,";    
    std::cout<<sizeof cookies<<"=sizeof cookies\n";//0x62fdf0 =array address,32=sizeof cookies
    int sum = sum_arr(cookies,ArSize);//0x62fdf0 = arr,8 = sizeof arr
    std::cout<<"Total cookies eaten:"<<sum<<std::endl;//Total cookies eaten:255

    sum = sum_arr(cookies+4,4);//0x62fe00 = arr,8 = sizeof arr
    std::cout<<"Last four eaters ate"<<sum<<" cookies.\n";//Last four eaters ate240 cookies.
    return 0;
}
int sum_arr(int arr[],int n){
    int total = 0;
    std::cout<<arr<<" = arr,";
    std::cout<<sizeof arr<<" = sizeof arr\n";
    for(int i=0;i<n;i++){
        total = total + arr[i];
    }
    return total;
}
/*
数组名是指针，但是sizeof数组名返回的是整个数组的大小
int sum(int arr[],int n){
    sizeof arr永远是8.
}
因为数组作为参数传递时，传递的是数组中元素的地址，(int[]) <-> int *
*/