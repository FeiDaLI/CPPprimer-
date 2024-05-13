#include<iostream>
char * builderstr(char c,int n);
int main(){
    using namespace std;
    int times;
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    cout<<"Enter an integer:";
    cin>>times;
    char *ps = builderstr(ch,times);
    cout<<ps<<endl;
    delete []ps;
    ps = builderstr('+',20);
    cout<<ps;
    delete []ps;
    return 0;
}
char *builderstr(char c,int n){
    char *pstr = new char[n+1];
    pstr[n]='\0';
    while(n-->0){
        pstr[n]=c;
    }
    return pstr;
}
/*
  返回值为字符串类型，使用char *接受. 用完使用delete[]释放.
*/