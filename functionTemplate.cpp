#include<iostream>
using namespace std;
template <typename V>
V MAX(V num1, V num2){
    return (num1>num2)?num1:num2;
}
int main()
{
    cout<<MAX(2,4)<<endl;
    cout<<MAX(7.65,4.65)<<endl;
    cout<<MAX('a','d')<<endl;
}