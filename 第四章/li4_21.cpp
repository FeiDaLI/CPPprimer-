#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable *p = new inflatable;
    cin>>p->name;
    cin>>(*p).volume;
    cin>>p->price;
    cout<<p->name<<" "<<(*p).price<<" "<<p->volume<<endl;
    delete p;
    return 0;
}
/*
  结构体指针访问成员使用 ->
  结构体变量访问成员使用 .
*/