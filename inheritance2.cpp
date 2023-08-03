#include<iostream>
using namespace std;
class Vehicle{
    protected:
        int engine_no;
        int vin_no;
};
class Car: public Vehicle{
    public:
        void setEng(int x, int y){
            engine_no=x;
            vin_no=y;
        }
        void getEng(){
            cout<<"Engine no. : "<<engine_no<<endl;
            cout<<"VIN no. : "<<vin_no<<endl;
        }
};
int main()
{
    Car c1;
    c1.setEng(2343,67543676);
    c1.getEng();
}