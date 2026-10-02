#include <iostream>
using namespace std;
class ArraySum{
    private:
    int arr[10];
    int sum=0;
    
    
    public:
    ArraySum(){
         cout<<"Enter the element: ";
        for (int i=0; i<10;i++){
           cin>>arr[i];
        }
    }
    void findSum() {
        
        for(int i=0; i<10;i++) {
            sum= sum+arr[i];
        }
        cout<<"The sum is: "<<sum;
    }
};
int main(){
    ArraySum a1;
    a1.findSum();
    
}