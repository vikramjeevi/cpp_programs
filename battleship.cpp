#include<iostream>
using namespace std;
int main()
{
    bool ship[4][4]={
        {0,0,0,1},
        {0,1,0,0},
        {0,0,1,0},
        {1,0,1,0}
    };
    int hits=0;
    int no_of_turns=0;
    while(hits<5)
    {
        int row,column;
        cout<<"enter the row no. between 0 to 3 : ";
        cin>>row;
        cout<<"enter the column no. between 0 to 3 : ";
        cin>>column;

        if(ship[row][column]){
            cout<<"Hit!"<<endl;
            hits++;
        }else{
            cout<<"Missed"<<endl;
        }
        no_of_turns++;


    }
    cout<<"Victory!!!!!"<<endl;
    cout<<"You take "<<no_of_turns<<" turns to win"<<endl;
}