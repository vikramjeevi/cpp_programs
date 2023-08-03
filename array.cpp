#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n]={};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int max = arr[0],secMax;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>max){
            secMax=max;
            max=arr[i];
        }
    }
    cout<<secMax<<endl;
    
}