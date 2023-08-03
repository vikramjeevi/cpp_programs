#include<iostream>
using namespace std;
class car{
    public:
      string brand;
      string model;
      int year;
        void info(){
        cout<<brand<<" "<<model<<" "<<year<<endl;
      }
      int maxSpeed();
};
int car::maxSpeed(){
    if(model=="Mustung"&&brand=="Ford")
        return 200;
    else if(model=="R8"&&brand=="Audi")
        return 250;
    else
        return 180;
}
int main()
{
    car c1;
    cout<<"Enter brand : ";
    cin>>c1.brand;
    cout<<"Enter model : ";
    cin>>c1.model;
    cout<<"Enter year : ";
    cin>>c1.year;
    c1.info();
    cout<<"It's MaxSpeed is "<<c1.maxSpeed()<<"km/hr"<<endl;
}