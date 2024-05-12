#include<iostream>
const int Cities = 5;
const int Years = 4;
int main(){
    using namespace std;
    const char *cities[Cities]={
        "A",
        "B",
        "C",
        "D",
        "E"
    };
    //二维数组赋值
    int maxtemps[Years][Cities] = {
        {96,100,87,101,105},
        {96,98,91,107,104},
        {97,101,93,108,107},
        {98,103,95,109,108}
    };
    //二维数组输出
    for(int city=0;city<Cities;++city){
        cout<<cities[city]<<":\t";
        for(int year=0;year<Years;year++){
            cout<<maxtemps[year][city]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}