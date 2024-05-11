/*
演示delete如何工作，程序还用它来释放内存.
*/
#include<iostream>
#include<cstring>
using namespace std;
char * getname(void);//函数原型
int main(){
    char *name;
    name = getname();
    cout<<name<<" "<<(int*)name<<endl;
    delete [] name;
    name = getname(); 
    cout<<name<<" "<<(int*)name<<endl;
    delete []name;
    return 0;
}

char *getname(){
    char temp[80];
    cin>>temp;
    char *p = new char[strlen(temp)+1];
    strcpy(p,temp);
    return p; //temp局部变量会自动销毁,返回一个指向字符串数组的内存.
}

/*
cin将输入放到temp数组，然后使用new重新分配内存。
使用strcpy()将temp数组复制到重新的分配的内存中。


*/
