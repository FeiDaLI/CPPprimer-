#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guests[2]={
        {"asd",1.0,2.0},
        {"asdasd",2.0,3.0}
    }; //结构体数组定义和初始化。
    cout<<guests[0].name<<" "<<guests[0].volume<<" "<<guests[0].price<<endl;
    cout<<guests[1].name<<" "<<guests[1].volume<<" "<<guests[1].price<<endl;
    return 0;
}

