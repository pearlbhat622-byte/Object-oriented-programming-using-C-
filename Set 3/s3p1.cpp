#include <iostream>
using namespace std;

class Number {
     public:
    int n;
    void setValue() {
        cout<<"Enter the number:";
        cin>>n;
    }
    void display() {
        cout<<n;
    }
};
Number add(Number a, Number b){
    Number c;
    c.n=a.n+b.n;
    return c;
}
int main(){
    Number n1,n2,n3;
    n1.setValue();
    n2.setValue();
    n3=add(n1,n2);
    n3.display();
}