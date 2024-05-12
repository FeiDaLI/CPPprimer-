#include<iostream>
const int Fave = 27;
int main(){
    using namespace std;
    int n;
    do{
        cin>>n;
        if(n<Fave){
            cout<<"too low";
        }else if(n>Fave){
            cout<<"Too high";
        }else{
            cout<<"Fave";
        }
    }while(n!=Fave);
    return 0;
}