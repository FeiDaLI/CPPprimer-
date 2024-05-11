#include<iostream>
#include<cstring>
int main(){
    using namespace std;
    char animal[20]="bear";//char数组 
    const char *bird = "wren";//指向char的const指针(字符串不变) 
    char *ps;
    cout<<animal<<" "<<bird<<endl; //bear wren
    cin>>animal;// asdasdasd
    ps=animal;//ps指向字符数组的第一个字符
    cout<<ps<<endl;// asdasdasd
    cout<<animal<<" "<<(int *)animal<<endl;// asdasdasd 0x62fdf0 
    cout<<ps<<" "<<(int*)ps<<endl;// asdasdasd 0x62fdf0 
    ps = new char[strlen(animal)+1];//ps重新指向一个新申请的内存
    strcpy(ps,animal);//复值animal 的值到新申请的内存
    cout<<animal<<" "<<(int*)animal<<endl;// asdasdasd 0x62fdf0 
    cout<<ps<<" "<<(int*)ps<<endl;//asdasdasd 0x10a2690
    delete[] ps;//释放内存
    return 0;
}
/*
如果想要打印字符串的地址，直接cout会现实字符串 (cout<<animal)
需要使用强制类型转换(cout<<(int*)animal).
*/