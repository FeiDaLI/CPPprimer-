#include<iostream>
#include<string>
#include<cstring>

int main(){
    using namespace std;
    char charr[20];
    string str;
    cout<<strlen(charr)<<endl;
    cout<<str.size()<<endl;
    cin.getline(charr,20);
    getline(cin,str);//字符串输入一行。这里涉及到友元函数?
    cout<<strlen(charr)<<endl;
    cout<<str.size()<<endl;
    return 0;
}