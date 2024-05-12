/*逆序遍历字符串*/
#include<iostream>
#include<string>
int main(){
    using namespace std;
    string word;
    getline(cin,word);//输入一行
    for(int i=word.size()-1;i>=0;i--){
        cout<<word[i];
    }
    return 0;
}