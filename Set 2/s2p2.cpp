#include <iostream>
using namespace std;
class Rectangle {
    private:
    int length;
    int breadth;
    int area;
    
    public:
    void input() 
    {
    
        cout<<"Enter the length of the rectangle: ";
        cin>>length;
        cout<<"Enter the breadth: ";
        cin>>breadth;
    }
    void calculateArea()
    {
        
        area=length*breadth;
        
    }
    void displayArea()
    {
        cout<<"The area is: "<<area;
    }
};
int main()
{
    Rectangle r1;
    r1.input();
    r1.calculateArea();
    r1.displayArea();
}