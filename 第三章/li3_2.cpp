#include<iostream>
#define ZERO 0
#include<climits>
int main(){
    //溢出的情况
    using namespace std;
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout<<sam<<"  "<<sue<<endl;
    sam = sam + 1;
    sue = sue + 1;

    cout<<sam<<"  "<<sue<<endl;
    sam = ZERO;
    sue = ZERO;

    cout<<sam<<" "<<sue<<endl;
    sam = sam-1;
    sue = sue-1;
    cout<<sam<<" "<<sue<<endl;
    return 0;

}