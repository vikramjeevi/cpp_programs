#include<iostream>
using namespace std;
void get_input(int *ptr,int n)
{
    
    for(int i=0;i<n;i++)
    {
        cin>>*(ptr+i);
    }
}
int main()
{
    int n;
    cin>>n;
    int *ptr = new int(n);
    get_input(ptr,n);
    for(int i=0;i<n;i++)
    {
        cout<<*(ptr+i)<<" ";
    }
}