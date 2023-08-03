#include<iostream>
#include<string>
using namespace std;
int main()
{
    int count=0;
    string str1="swap.cpp:12:44: note: suggested alternative.";
    for(int i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    cout<<"Length without string function : "<<count<<endl;
    cout<<"Length with string function : "<<str1.length()<<endl;
}