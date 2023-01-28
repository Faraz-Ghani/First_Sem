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
	if(num1==num2 && num2==num3){
		cout<<"All numbers are equal ";
	}
	else{
		cout<<"Numbers are Not equal ";
	}
	return 0;
}
