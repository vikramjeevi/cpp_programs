#include<iostream>
using namespace std;
class car{
    private:
      string brand;
      string model;
      int year;
    public:
        void setInfo(string x, string y, int z){
        brand = x;
        model = y;
        year = z;
      }
      void getInfo()
      {
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
    string str1,str2;
    int y;
    cout<<"Enter brand : ";
    cin>>str1;
    cout<<"Enter model : ";
    cin>>str2;
    cout<<"Enter year : ";
    cin>>y;
    c1.setInfo(str1,str2,y);
    c1.getInfo();
    cout<<"It's MaxSpeed is "<<c1.maxSpeed()<<"km/hr"<<endl;
}