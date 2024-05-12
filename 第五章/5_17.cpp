/* cin.get(ch);输入的字符可以是空格、换行符 */
#include<iostream>
int main(){
    using namespace std;
    char ch;
    int count=0;
    cin.get(ch);
    while(ch!='#'){
        cout<<ch;
        count++;
        cin.get(ch);
    }
    cout<<endl<<count;
    return 0;
}
/*
asdb      #
asdb      
10
*/