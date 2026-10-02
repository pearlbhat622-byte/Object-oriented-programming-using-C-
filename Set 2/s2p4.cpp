#include <iostream>
using namespace std;
class Book {
    string name;
    string author;
    public:
    Book(string n, string a) 
    {
        name=n;
        author=a;
    }
    void displayBook(){
        cout<<"The details of the book!!"<<endl;
        cout<<name<<endl;
        cout<<author<<endl;
    }
};
int main ()
{
    
    string s;
    string s1;
    cout<<"Enter the name of the book: ";
    cin>>s;
    cout<<"Enter the author name: ";
    cin>>s1;
    Book b(s,s1);
    b.displayBook();
}