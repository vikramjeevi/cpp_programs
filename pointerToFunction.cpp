#include<iostream>
using namespace std;
int power(int base,int exponent)
{
    int result=1;
    for(int i=0;i<exponent;i++)
    {
        result*=base;
    }
    return result;
}
int main()
{
    int (*p)(int,int);
    p=&power;
    cout<<(*p)(2,3)<<endl;
}