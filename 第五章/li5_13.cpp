#include<iostream>
/* 使用while循环遍历字符串. */
const int ArSize =20;
int main(){
    using namespace std;
    char name[ArSize];
    cin>>name;
    int i=0;
    while(name[i]!='\0'){
        cout<<name[i++];
    }
    return 0;
}