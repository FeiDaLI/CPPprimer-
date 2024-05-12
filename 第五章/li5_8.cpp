/*
for循环{
    多条语句
   }
*/
#include<iostream>
int main(){
    using namespace std;
    double number;
    double sum = 0.0;
    for(int i=1;i<=5;i++){
        cin>>number;
        sum+=number;
    }
    cout<<sum/5;
    return 0;
}