#include<iostream>
using namespace std;
class Book
{
    private:
        string title;
        string author;
        string isbn;
        bool available;
    public:
        void setTitle(string title){
            this->title=title;
        }
        void setAuthor(string author){
            this->author=author;
        }
        void setAvailable(bool available){
            this->available=available;
        }
        void setISBN(string isbn){
            this->isbn=isbn;
        }
        string getTitle(){
            return title;
        }
        string getAuthor(){
            return author;
        }
        string getISBN(){
            return isbn;
        }
        string getAvailable(){
            if(available==true){
                cout<<"Book is Available"<<endl;
            }
            else{
                cout<<"Checked out"<<endl;
            }
        }
        void barrowBook(){
            available=false;
        }
        void returnBook(){
            available=true;
        }
};

int main()
{
    Book b1;
    int choose=0;
    while(true)
    {
        cout<<"Menu \n1. Add book\n2. Remove book\n3. Search for book\n4. Exit\n"<<endl;
        cout<<"Enter your choice : ";
        cin>>choose;
        if(choose==1) {cout<<"Enter title : ";
                    string a;
                    cin>>a;
                    b1.setTitle(a);
                    cout<<"Enter author : ";
                    string b;
                    cin>>b;
                    b1.setAuthor(b);
                    cout<<"Enter ISBN : ";
                    string c;
                    cin>>c;
                    b1.setISBN(c);
                    cout<<"Book added to library"<<endl;
        }
        else if(choose==2){
            cout<<"Enter isbn : ";
            string d;
            cin>>d;
            if(d==b1.getISBN()){
                b1.barrowBook();
            }
            cout<<"Book is removed"<<endl;
        }
        else if(choose==3){
            cout<<"Enter isbn : ";
            string e;
            cin>>e;
            if(e==b1.getISBN()){
                cout<<"Book Info"<<endl;
                cout<<"Title : "<<b1.getTitle()<<endl;
                cout<<"Author : "<<b1.getAuthor()<<endl;
                cout<<"ISBN : "<<b1.getISBN()<<endl;
                //cout<<"Availablity : "<<b1.getAvailable()<<endl;
            }
        }
        else{
            break;
        }
    }
    
}
