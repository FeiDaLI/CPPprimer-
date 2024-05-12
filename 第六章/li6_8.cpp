#include<iostream>
#include<cctype>
int main(){
    using namespace std;
    char ch;
    int space = 0;
    int digits = 0;
    int chars = 0;
    int puncl = 0;
    int others = 0;
    cin.get(ch);
    while(ch!='@'){
        if(isalpha(ch))chars++;
        else if(isspace(ch))space++;
        else if(isdigit(ch))digits++;
        else if(ispunct(ch))puncl++;
        else others++;
        cin.get(ch);
    }
    cout<<chars<<"letters,"<<space<<" whitespace,"
    <<digits<<" digits,"<<puncl<<" punctuations,"
    <<others<<" others.\n";
    return 0;
}
/*
cctype库函数：
isalpha(ch)判断是否是字符
isdigit(ch)判断是否是数字
ispunct(ch)判断是否是标点
....
*/