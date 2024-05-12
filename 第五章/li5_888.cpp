#include<iostream>
int main(){
    using namespace std;
    int x=20; 
    {
        //块开始
        int y=100;
        cout<<x<<endl;
        cout<<y<<endl;
    }
    cout<<x<<endl;
   // cout<<y<<endl; invalid
   return 0; 
}
/* 20、100、20 */
