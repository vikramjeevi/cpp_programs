// Lab Template

#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int sum = a+b;
    int product = a*b;
    int difference=a-b;
    int quotient=a/b;
    if(a>0&&b>0)
    {
        cout<<"The sum of the two integers is "<<sum<<". ";
        cout<<"The product of the two integers is "<<product<<".";
    }
    else if(a<0&&b<0)
    {
        cout<<"The difference of the two integers is "<<a-b<<". "<<"The quotient of the two integers is "<<a/b<<".";
    }
    else if((a>0&&b<0)||(a<0&&b>0))
    {
        cout<<"The product of the two integers is "<<a*b<<". ";
        cout<<"The quotient of the two integers is "<<a/b<<".";
    }
    else{
        cout<<"Division is undefined.";
    }
    return 0;
}

