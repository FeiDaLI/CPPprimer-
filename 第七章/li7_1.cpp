#include<iostream>
void simple();//函数原型

int main(){
    using namespace std;
    cout<<"main will call the simple() function:\n";
    simple();
    return 0;
}
//无返回值的函数
void simple(){
    using namespace std;
    cout<<"simple function"<<endl;
}