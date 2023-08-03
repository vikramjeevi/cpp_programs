#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    /*ofstream file("file1.txt");
    file<<"Hello World, \nPS if ($?) { g++ polymorphism.cpp -o polymorphism } ;\nif ($?) { .polymorphism }";*/

    string text;
    ifstream file("file1.txt");

    while(getline(file,text)){
    cout<<text<<endl;
    }
    file.close();

}