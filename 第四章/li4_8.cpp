#include<iostream>
#include<string>
int main(){
    using namespace std;
    string s1="avasd";
    string s2;
    string s3;
    s2=s1;//字符串赋值
    cout<<s1<<" "<<s2<<endl;
    s2="asdasd";
    cout<<s2<<endl;
    s3=s1+s2;//字符串拼接
    cout<<s3<<endl;
    s1+=s2;
    cout<<s1<<endl;
    s2+=" for a day";//字符串拼接
    cout<<s2<<endl;
    return 0;
}