#include <iostream>
using namespace std;
class Number
{
    private:
    int num;
    int result=0;
    
    public:
    void input()
    {
        cout<<"Enter the number: ";
        cin>>num;
    }
    void isEven()
    {
        if(num%2==0)
        {
            result=1;
        }
    }
    void display()
    {
        cout<<"The reult is:";
        if(result==1)
        {
            cout<<"Even";
        }
        else {
            cout<<"Odd";
        }
    }
};
int main() {
    Number n1;
    n1.input();
    n1.isEven();
    n1.display();
}