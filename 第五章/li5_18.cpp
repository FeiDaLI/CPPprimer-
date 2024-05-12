#include<iostream>
int main(){
    using namespace std;
    char ch;
    int count=0;
    cin.get(ch);
    while(cin.fail()==false){
        cout<<ch;
        ++count;
        cin.get(ch);
    }
    cout<<endl<<count<<endl;
    return 0;
}
/* 
  cin.fail()和cin.eof()当检测到EOF标志时，返回true,否则返回false   
  windows可以使用ctrl+Z模拟EOF.

*/