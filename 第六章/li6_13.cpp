#include<iostream>
const int MAX =5;
int main(){
    using namespace std;
    double fish[MAX];
    int i=0;
    while(i<MAX && cin>>fish[i]){
        i++;
    }
    double total =0.0;
    for(int j=0;j<i;j++){
        total +=fish[j];
    }
    if(i==0)cout<<"No fish\n";
    else cout<<total/i;
    return 0;
}

/*
读取数字的循环。
例子中,
如果cin读取到的不是数字,那么返回false
*/