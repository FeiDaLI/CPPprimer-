#include<iostream>
int main(){
    using std::cout;
    using std::endl;
    int a=20;
    int b=20;
    cout<<a<<" "<<b<<endl;//20 20
    cout<<a++<<" "<<++b<<endl;//20 21
    cout<<a<<" "<<b<<" "<<endl;//21 21
    return 0;
}