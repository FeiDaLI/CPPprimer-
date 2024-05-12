#include<iostream>
using namespace std;
void showmenu();
void report();
void comfort();
int main(){
    showmenu();
    int choice;
    cin>>choice;
    while(choice!=5){
        switch (choice)
        {
        case 1: 
            cout<<"1\n";
            break;
        case 2:
            report();
            break;
        case 3:
            cout<<"3\n";
            break;
        case 4:
            comfort();
            break;
        default:
            cout<<"That's not a choice.\n";
            break;
        }
        showmenu();
        cin>>choice;
    }
    cout<<"Bye!\n";
    return 0;
}
void showmenu(){
    cout<<"1,2,3,4,5\n";
}
void report(){
    cout<<"report\n";
}
void comfort(){
    cout<<"comfort\n";
}
/*
使用switch case
写menu.
*/