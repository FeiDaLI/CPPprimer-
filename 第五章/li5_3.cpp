/*  表达式的值  */
#include<iostream>
int main(){
    using namespace std;
    int x;
    cout<<(x=100)<<endl;  //100
    cout<<(x<3)<<endl;  //0
    cout<<(x>3)<<endl;  //1
    cout.setf(ios_base::boolalpha);//显示bool类型
    cout<<(x<3)<<endl;//false
    cout<<(x>3)<<endl;//true
    return 0;
}

