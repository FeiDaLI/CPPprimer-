#include<iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable bouquet={"sunflowers",0.20,12.49};
    inflatable choice;
    cout<<bouquet.name<<" "<<bouquet.volume<<" "<<bouquet.price<<endl;
    choice = bouquet;//结构体变量的赋值
    cout<<choice.name<<" "<<choice.volume<<" "<<choice.price<<endl;
    return 0;
}
/*
sunflowers 0.2 12.49
sunflowers 0.2 12.49
*/