#include<iostream>
int main(){
    using namespace std;
    int x=20;
    {
        cout<<x<<endl;//20
        int x=100;//新x
        cout<<x<<endl;//使用新x
    }
    cout<<x<<endl;
}