#include<iostream>
const int ArSize = 6;
int main(){
    using namespace std;
    float num[ArSize];
    int i=0;
    float temp;
    cin>>temp;
    while(i<ArSize&&temp>=0){
        num[i]=temp;
        i++;
        if(i<ArSize){
            cout<<"Next"<<endl;
            cin>>temp;
        }
    }
    if(i==0)cout<<"byte";
    else{
        cout<<"Enter a float";
        float you;
        cin>>you;
        int count=0;
        for(int j=0;j<i;j++){
            if(num[j]>you)++count;
        }
        cout<<count;
    }
    return 0;
}
/*
&&运算符
*/