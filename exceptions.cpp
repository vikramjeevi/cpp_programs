#include<iostream>
using namespace std;
int main()
{
    int age;
    cin>>age;
    try{
        if(age>=18)
            cout<<"Eligible to Vote"<<endl;
        else
            throw age;
    }
    catch(int num){
        cout<<"Not eligible"<<endl;
        cout<<"age : "<<num;
    }
}