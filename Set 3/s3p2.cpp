#include <iostream>
using namespace std;

class Student {
    public:
    int roll_number;
    int marks;
    
    void setvalues(){
        cout<<"Enter the roll number:";
        cin>>roll_number;
        cout<<"Enter the marks:";
        cin>>marks;
    }
};
Student findTop(Student a, Student b){
     if(a.marks>b.marks){
         return a;
     }
    else{
        return b;
    }
}
int main(){
    Student s1,s2,s3;
    s1.setvalues();
    s2.setvalues();
    s3=findTop(s1,s2);
    cout<<"Highest marks"<<s3.marks;
    cout<<"Roll number"<<s3.roll_number;
    }  