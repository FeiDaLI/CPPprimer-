#include<iostream>
using namespace std;
struct ant_year{
    int year;
};
int main(){
    ant_year s01,s02,s03;
    s01.year=1998;
    ant_year *pa=&s02;
    pa->year=1999;
    ant_year t[3]; //3个结构体数组
    t[0].year=2003;
    cout<<t->year<<endl;//2003
    const ant_year * a[3]={&s01,&s02,&s03};
    cout<<a[1]->year<<endl;//1999
    const ant_year** ppa=a;
    auto ppb=a;
    cout<<(*ppa)->year<<endl;//1998
    cout<<(*(ppb+1))->year<<endl;//1999
    return 0;
}
