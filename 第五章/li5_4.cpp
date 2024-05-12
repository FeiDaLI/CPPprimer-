/*for循环实现阶乘*/
#include<iostream>
const int ArSize = 16;
int main(){
    using namespace std;
    long long f[ArSize];
    f[1]=f[0]=1LL;//注意是long long类型
    for(int i=2;i<ArSize;i++){
        f[i] = i*f[i-1];
    }
    for(int i=0;i<ArSize;i++){
        cout<<f[i]<<endl;
    }
    return 0;
}
/*
1
1
2
6
24
120
720
5040
40320
362880
3628800
39916800
479001600
6227020800
87178291200
1307674368000*/