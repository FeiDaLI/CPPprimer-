#include<iostream>
#include<string>
/*  string类型的比较 */
int main(){
    using namespace std;
    string word="?ate";
    for(char ch='a';word!="mate";ch++){
        cout<<word<<endl;
        word[0]=ch;
    }
    return 0;
}