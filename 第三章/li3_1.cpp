#include<iostream>
#include<climits>
int main(){
    //数据类型
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;
    cout<<"int is "<<sizeof(int)<<" bytes."<<endl;
    cout<<"short is "<<sizeof(short)<<"bytes."<<endl;
    cout<<"long is "<<sizeof n_llong<<"bytes."<<endl;
    cout<<"long long is "<<sizeof(long long)<<"bytes."<<endl;
    cout<<"Maximum values:"<<endl;
    cout<<"int: "<<n_int <<endl;
    cout<<"short: "<<n_short<<endl;
    cout<<"long: "<<n_long<<endl;
    cout<<"long long: "<<n_llong<<endl;
}
/*
int is 4 bytes. 
short is 2bytes.
long is 4bytes.
long long is 8bytes.

Maximum values:
int: 2147483647
short: 32767
long: 2147483647
long long: 9223372036854775807
*/