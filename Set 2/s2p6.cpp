#include <iostream>
#include <string>
using namespace std;
class Text {
private:
	string str;

public:
	Text(string a) {
		str=a;
	}
	void length() {
		int count=0;
		int i=0;
		while(str[i]!='\0') {
			i+=1;
			count+=1;
		}
		cout<<"The length of the string is: "<<count;
	}
};
int main() {
	string x;
	cout<<"Enter the string: ";
	cin>>x;
	Text t1(x);
	t1.length();
}