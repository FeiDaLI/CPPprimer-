#include<iostream>
int main(){
    using namespace std;
    float a = 2.34E+22f;
    float b = a + 1.0f;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<b-a<<endl;
}
/*
2.34e+022
2.34e+022
0
浮点数表示的范围比整数大得多。
浮点运算的速度通常比整数慢，而且会有精度损失。

*/