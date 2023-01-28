#include "iostream"
using namespace std;
int main(){
	
	int age;
	cout<<"Enter Your age: ";
	cin>>age;
	if(age<18){
		cout<<"You are not eligible to vote ";	
	}
	else{
		cout<<"You are eligiable to vote ";
	}
	return 0;
}
