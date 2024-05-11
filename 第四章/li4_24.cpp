//数组、vector对象和array对象
#include<iostream>
#include<vector>
#include<array>
int main(){
    using namespace std;
    double a1[4]={1.2 , 2.4 , 3.6 , 4.8};
    vector<double>a2(4);
    a2[0]=1.0/3.0; a2[1]=1.0/5.0;
    a2[2]=1.0/7.0; a2[3]=1.0/9.0;
    array<double,4>a3 ={ 3.14, 2.72, 1.62, 1.4 };
    array<double,4>a4;
    a4=a3;
    cout<<a1[2]<<" "<<&a1[2]<<endl;  //3.6 0x62fd20
    cout<<a2[2]<<" "<<&a2[2]<<endl;  //0.142857 0x6926a0
    cout<<a3[2]<<" "<<&a3[2]<<endl;  //1.62  0x62fce0
    cout<<a4[2]<<" "<<&a4[2]<<endl;  //1.62  0x62fcc0
    a1[-2]=20.2;
    cout<<a1[-2]<<" "<<&a1[-2]<<endl;//20.2  0x62fd00
    return 0;
}
/*
a1[-2] = 20.2 <=> *(a1-2) = 20.2。
找到a1指向的地方，向前移动两个double元素。
C++不检查这种超界错误。
可以使用a2.at()访问，在运行期间捕获非法索引。
*/