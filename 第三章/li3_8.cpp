//浮点数
#include<iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);//使用顶点数表示
    float tub = 10.0/3.0; 
    double mint=10.0/3.0;
    const float million = 1.0e6;
    cout<<million*tub<<endl;
    cout<<million*mint<<endl;
}
/*
3333333.250000
3333333.333333
double精度比float更高
*/