#include<iostream>
using namespace std;
class Vehicle{
    private:
        string make;
        string model;
        int year;
        int price;
    public:
        void setMake(string make){
            this->make = make;
        }
        void setModel(string model){
            this->model = model;
        }
        void setYear(int year){
            this->year=year;
        }
        void setPrice(int price){
            this->price=price;
        }
        string getMake(){
            return make;
        }
        string getModel(){
            return model;
        }
        int getYear(){
            return year;
        }
        int getPrice(){
            return price;
        }
        void displayDetails(){
        }
        float claculateTax(){
        }
        
};
class Car:public Vehicle{
    private:
        int numDoors;
    public:
        void setNumDoors(int numDoors){
            this->numDoors=numDoors;
        }
        int getNumDoors(){
            return numDoors;
        }
        int calculateTax(){
            return (10/100)*getPrice();
        }
        void displayDetails(){
            cout<<"Vehicle Information:"<<endl;
            cout<<"Make : "<<getMake()<<endl;
            cout<<"Model : "<<getModel()<<endl;
            cout<<"Year : "<<getYear()<<endl;
            cout<<"Price : $"<<getPrice()<<endl;
            cout<<"no. of Doors : "<<getNumDoors()<<endl;
            //cout<<"Tax Payable : $"<<calculateTax()<<endl;
        }
};
class Truck: public Vehicle{
    private:
        int payload;
        int towingCapacity;
    public:
        void setPayload(int payload){
            this->payload=payload;
        }
        void setTowingCapacity(int towingCapacity){
            this->towingCapacity=towingCapacity;
        }
        int getPayload(){
            return payload;
        }
        int getTowingCapacity(){
            return towingCapacity;
        }
        float calculateTax(){
            return (12/100)*getPrice();
        }
};
int main()
{
    Car carObj;
    Truck truckObj;
    int choose;
    while(true){
        cout<<"Menu:\n1. Add vehicle\n2. Remove vehicle\n3. Search for vehicle\n4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choose;
        if(choose==1){
            cout<<"Enter Vehicle type (car/truck): ";
            string type;
            cin>>type;
            if(type=="car"){
                string a,b;
                int c,d,e;
                cout<<"Enter vehicle make: ";
                cin>>a;
                carObj.setMake(a);
                cout<<"Enter vehicle model: ";
                cin>>b;
                carObj.setModel(b);
                cout<<"Enter vehicle year: ";
                cin>>c;
                carObj.setYear(c);
                cout<<"Enter vehicle price: ";
                cin>>d;
                carObj.setPrice(d);
                cout<<"Enter number of doors: ";
                cin>>e;
                carObj.setNumDoors(e);
                cout<<"Car added to fleet."<<endl;
            }
            else if(type=="truck"){
                string p,q;
                int r,s,t,u; 
                cout<<"Enter vehicle make: ";
                cin>>p;
                truckObj.setMake(p);
                cout<<"Enter vehicle model: ";
                cin>>q;
                truckObj.setModel(q);
                cout<<"Enter vehicle year: ";
                cin>>r;
                truckObj.setYear(r);
                cout<<"Enter vehicle price: ";
                cin>>s;
                truckObj.setPrice(s);
                cout<<"Enter payload in pounds: ";
                cin>>t;
                truckObj.setPayload(t);
                cout<<"Enter towing capacity in pounds: ";
                cin>>u;
                truckObj.setTowingCapacity(t);
                cout<<"Truck added to fleet."<<endl;
            }
        }
        else if(choose==2){
            string x,y;
            cout<<"Enter vehicle make: ";
            cin>>x;
            cout<<"Enter vehicle model: ";
            cin>>y;
            if(x==carObj.getMake() && y==carObj.getModel() || x==truckObj.getMake() && y==truckObj.getModel()){
                cout<<"Vehicle removed from fleet."<<endl;
            }
        }
        else if(choose==3){
            string x,y;
            cout<<"Enter vehicle make: ";
            cin>>x;
            cout<<"Enter vehicle model: ";
            cin>>y;
            if(x==carObj.getMake() && y==carObj.getModel()){
                carObj.displayDetails();
                cout<<"Tax Payable : $"<<carObj.calculateTax()<<endl;
            }
        }
        else{
            break;
        }
    }
}