#include<iostream>
#include<climits>
bool is_int(double);
int main(){
    using namespace std;
    double num;
    cin>>num;
    while(!is_int(num)){
        cin>>num;
    }
    int val = int(num);
    cout<<val;
    return 0;
}

bool is_int(double x){
    if(x<=INT_MAX&&x>=INT_MIN)return true;
    else return false;
}
/*
!的应用:
!is_int(x):double x是否在int范围内.
*/