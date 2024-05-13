#include<iostream>
void cheers(int);
double cube(double x);

/*
  函数原型:在C++中调用函数之前必须声明函数原型或直接给出定义，否则编译报错。
  如果注释掉cheers和cube函数,编译就会报错。
*/

int main(){
    using namespace std;
    cheers(5);
    cout<<"Give me a number:";
    double side;
    cin>>side;
    double volume = cube(side);
    cout<<side<<" "<<volume<<endl;
    cheers(cube(2));
    return 0;   
}

//void函数调用
void cheers(int n){
    using namespace std;
    for(int i=0;i<n;i++)cout<<"cheers!";
    cout<<endl;
}
//有返回的函数调用
double cube(double x){
    return x*x*x;
}

