#include<iostream>
const char *quliafy[4]={
 "Abc\n",
 "mud tug\n",
 "mats coas\n",
 "pie raowr.\n"
};
int main(){
    using namespace std;
    int age;
    cin>>age;
    int index;
    if(age>17&&age<35)index=0;
    else if(age>=35&&age<50)index=1;
    else if(age>=50&&age<65)index=2;
    else index=3;
    cout<<quliafy[index];
    return 0;
}
/*
   &&和if else结合进行范围判断.
   
*/