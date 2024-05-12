/* for循环的步长 */
#include<iostream>
int main(){
    using std::cout;
    using std::cin;
    using std::endl;
    int by;
    cin>>by;
    for(int i=0;i<100;i+=by){
        cout<<i<<endl;
    }
    return 0;
}