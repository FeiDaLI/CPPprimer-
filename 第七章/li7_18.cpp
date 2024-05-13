#include<iostream>
/*
函数指针的使用：
 double (*pf)(int);
 pf是函数指针，指向返回double有一个参数为int的函数。
 (*pf)(int)相当于函数调用。
*/
double betsy(int);
double pam(int);
void estimate(int lines,double (*pf)(int));
int main(){
    using namespace std;
    int code;
    cout<<"How many lines of code do you need?";
    cin>>code;
    cout<<"Here's Betsy's estimeate:\n";
    estimate(code,betsy);
    cout<<"Here's Pam's estimate:\n";
    estimate(code,pam);
    return 0;
}
double betsy(int lns){
    return 0.05*lns;
}
double pam(int lns){
    return 0.03*lns+0.0004*lns*lns;
}
void estimate(int lines,double (*pf)(int)){
    using namespace std;
    cout<<lines<<"lines will take";
    cout<<(*pf)(lines)<<"hours\n";
}