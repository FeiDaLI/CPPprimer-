#include<iostream>
int main(){
    using namespace std;
    int num[5]={20,20,20,20,19};
    for(int i=0;num[i]==20;i++){
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;num[i]=20;i++){
        cout<<num[i]<<" ";
    }
}
/*
不要混淆=和==
*/