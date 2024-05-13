#include<iostream>
#include<string>
using namespace std;
const int SIZE = 5;
/*
 string类型作为参数传入.
*/
void display(const string s[],int n);
int main(){
    string list[SIZE];
    cout<<"Enter your "<<SIZE<<"favorite astronomical sights:\n";
    for(int i=0;i<SIZE;i++){
        cout<<i+1<<":";
        getline(cin,list[i]);
    }
    cout<<"Your list:\n";
    display(list,SIZE);
    return 0;
}
void display(const string s[],int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<":"<<s[i]<<endl;
    }
}
