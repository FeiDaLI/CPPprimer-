#include<iostream>
int main(){
    using namespace std;
    char ch='M';
    int i=ch;
    cout<<i<<endl;//M的ASCII码
    ch=ch+1;
    i=ch;
    cout<<i<<endl;
    cout.put(ch);//cout.put()用于显示一个字符(cout<<ch)
    cout.put('!');
    cout<<endl;
    return 0;
}