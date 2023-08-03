#include<iostream>
using namespace std;
class Animal
{
    public:
        void sound(){
            cout<<"animal makes sound"<<endl;
        }
};
class Dog:public Animal{
    public:
        void sound(){
            cout<<"bow bow"<<endl;
        }
};
int main()
{
    Animal a;
    Dog d;

    d.sound();
    a.sound();
}