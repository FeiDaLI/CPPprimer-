#include<iostream>
int main(){
    using namespace std;
    char ch;
    int count=0;
    cin>>ch;
    while(ch!='#'){
        cout<<ch;
        count++;
        cin>>ch;
    }
    cout<<endl<<count;
    return 0;
}
/*
abc #
abc
3
cin自动忽略空格,所以字符数为3
*/