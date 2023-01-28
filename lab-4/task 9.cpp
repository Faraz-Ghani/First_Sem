#include "iostream"
using namespace std;
int main(){
float num1,num2,num3;
cout<<"Input first number :";
cin>>num1;
cout<<"Input second number :";
cin>>num2;
cout<<"Input third number :";
cin>>num3;
	if(num1>num2 && num1>num3){
		cout<<"Greatest number is "<<num1;
	}
	else if(num2>num1 && num2>num3){
		cout<<"Greatest number is "<<num2;
	}
	else if(num3>num1 && num3>num2) {
		cout<<"Greatest number is "<<num3;
	}
	return 0;
}
