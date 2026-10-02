#include <iostream>
#include <string>
using namespace std;
class students {
    private:
    string name;
    int rollnumber;
    
    public:
    void setData(string n,int r)
    {
        name=n;
        rollnumber=r;
    }
    void displayData()
    {
        cout<<"Student name is: "<<name;
        cout<<"Student roll number: "<<rollnumber;
    }
};
int main()
{
    students s1;
    int a;
    string s;
    cout<<"Enter the name of the student: ";
    cin>>s;
    cout<<"Enter the roll number: ";
    cin>>a;
    s1.setData(s,a);
    s1.displayData();
}