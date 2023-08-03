#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int id;
        double gpa;
    public:
        void setName(string name)
        {
            this->name = name;
        }
        void setID(int y)
        {
            id = y;
        }
        void setGPA(double z)
        {
            gpa = z;
        }
        string getName(){
            return name;
        }
        int getID(){
            return id;
        }
        double getGPA(){
            return gpa;
        }
};

int main()
{
    Student s1;
    string s;
    int n;
    double d;
    cout<<"Enter Name : ";
    cin>>s;
    cout<<"Enter ID : ";
    cin>>n;
    cout<<"Enter GPA : ";
    cin>>d;
    s1.setName(s);
    s1.setID(n);
    s1.setGPA(d);
    cout<<"Student Name : "<<s1.getName()<<endl;
    cout<<"Student ID : "<<s1.getID()<<endl;
    cout<<"Student GPA : "<<s1.getGPA()<<endl;
}