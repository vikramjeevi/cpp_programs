#include <algorithm> 
#include<iostream>
#include<string>
using namespace std; 
int main() 
{ 
    string str;
    getline(cin,str); 
    string str1=str;
    reverse(str.begin(), str.end()); 
	if(str1==str)
    {
        cout<<"Palindrome";
    }
    else{
        cout<<"not palindrome";
    }
    return 0;
}