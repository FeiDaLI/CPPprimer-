#include<iostream>
int main(){
    using namespace std;
    int ch;
    int count = 0;
    while((ch=cin.get())!=EOF){
        cout.put(char(ch));
        count++;
    }
    cout<<endl<<count;
    return 0;
}
/*
使用int类型接收字符类型，可以使用EOF(-1)判断是否到文件结尾。
EOF表示没有字符.如果用char类型接受可能会出错。
*/