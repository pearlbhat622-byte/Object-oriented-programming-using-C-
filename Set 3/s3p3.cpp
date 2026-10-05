#include <iostream>
using namespace std;
class Distance{
    public:
    int feet;
    int inches;
    
    void input(){
        cout<<"Enter the feet:";
        cin>>feet;
        cout<<"Enter the inches:";
        cin>>inches;
    }
    
    void addDistance(Distance d1, Distance d2){
        feet=d1.feet+d2.feet;
        inches=d1.inches+d2.inches;
        if(inches>=12){
            feet++;
            inches=inches-12;
        }
    }
    void display(){
        cout<<feet<<"ft";
        cout<<inches<<"in";
    }
};
int main(){
    Distance d1,d2,d3;
    d1.input();
    d2.input();
    d3.addDistance(d1,d2);
    d3.display();
}