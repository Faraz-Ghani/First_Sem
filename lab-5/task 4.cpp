#include "iostream"
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character : ";
	cin>>ch;
	if(ch>=65 && ch<=90){
		cout<<"Entered character is Uppercase";
	}
	else if(ch>=97 && ch<=122){
		cout<<"Entered character is lowercase";
	}
	else{
		cout<<"invalid input";
	}
	
	return 0;
}
