#include<iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.get(name,ArSize).get();
    cout<<"Enter your favorite dessert:\n";
    cin.get(dessert,ArSize).get();
    cout<<"I have some delicious "<<dessert;
    cout<<" for you,"<<name<<endl;
    return 0;
}
/*
cin.get(num,size).get();和cin.getline()等价
cin.get()会把换行符留在输入队列。
*/