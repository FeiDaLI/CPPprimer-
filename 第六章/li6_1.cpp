#include<iostream>
int main(){
    using std::cin;
    using std::cout;
    using std::endl;
    char ch;
    int spaces=0;
    int total=0;
    cin.get(ch);
    while(ch!='.'){
        if(ch==' ')++spaces;
        ++total;
        cin.get(ch);
    }
    cout<<spaces<<" "<<total<<endl;
    return 0;
}
/*
AS asAS ad`12 .
3 14
*/