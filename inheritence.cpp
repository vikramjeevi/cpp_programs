#include<iostream>
using namespace std;
class first{
    public:
        int x;
        void func1(){
            cout<<"first Parent class"<<" "<<x<<endl;
        }
};
class second{
    public:
        int y;
        void func2(){
            cout<<"second Parent class"<<" "<<y<<endl;
        }
};
class child: public first, public second{

};

int main()
{
    child c;
    c.x=89;
    c.y=700;
    c.func1();
    c.func2();
}