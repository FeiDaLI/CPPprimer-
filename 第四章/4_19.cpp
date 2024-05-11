#include<iostream>
int main(){
    using namespace std;
    double wage[3]={1000.0,20000.0,30000.0};
    short stacks[3]={3,2,1};
    double *pw = wage;
    short *ps = &stacks[0];
    cout<<pw<<" "<<*pw<<endl;//  0x62fdd0 1000
    cout<<ps<<" "<<*ps<<endl;//  0x62fdca 3
    ps=ps+1;
    pw=pw+1;
    cout<<pw<<" "<<*pw<<endl;// 0x62fdd8 20000(指针加1,移动到下一个元素)
    cout<<ps<<" "<<*ps<<endl;// 0x62fdcc 2
    cout<<stacks[0]<<" "<<stacks[1]<<endl;// 3 2
    cout<<*stacks<<" "<<*(stacks+1)<<endl;// 3 2 数组名可以当成指针
    cout<<sizeof(wage)<<endl;//  24(8*3) 数组长度
    cout<<sizeof(pw)<<endl;//指针长度 8(64位)
    return 0;
}