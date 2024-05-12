#include<iostream>
#include<ctime>
int main(){
    using namespace std;
    float secs;
    cin>>secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    clock_t start = clock();//start为该语句执行时系统时间
    while(clock()-start<delay);//假设系统时间小于delay则一直循环。
    cout<<"done\a\n";
    return 0;
}
/*
clock()返回程序开始执行后所用的系统时间。
*/
