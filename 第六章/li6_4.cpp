#include<iostream>
int main(){
    using namespace std;
    char ch;
    cin>>ch;
    if(ch=='y'||ch=='Y'){
        cout<<"A";
    }else if(ch=='n'||ch=='N'){
        cout<<"B";
    }else{
        cout<<"C";
    }
    return 0;
}