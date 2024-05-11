#include<iostream>
int main(){
    using namespace std;
    int n=1001;
    int *p=new int;
    *p=1001;
    cout<<n<<" "<<&n<<endl;//1001 0x62fe0c  
    cout<<*p<<" "<<p<<endl;//1001 0x6f2690 
    double *d=new double;
    *d=1001.1;
    cout<<*d<<" "<<d<<endl;//1001.1 0x6f26b0
    cout<<sizeof(p)<<endl;//8
    cout<<sizeof(d)<<endl;//8 指针都是8位(64位系统,虚拟地址使用8位.)
    cout<<sizeof(*p)<<endl;//4 int类型是4位.
    cout<<sizeof(*d)<<endl;//8 double类型是8位.
    delete p;
    delete d;//delete删除分配给指针的内存,需要和new成对使用。
}
