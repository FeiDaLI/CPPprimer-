#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guest = {"abc",1.0,2.0};
    inflatable pal = {"asd",3.0,3.0};
    cout<<guest.name<<" "<<pal.name<<endl;
    cout<<guest.price<<" "<<pal.price<<endl;
    return 0;
}
/*
结构体声明和使用.
*/