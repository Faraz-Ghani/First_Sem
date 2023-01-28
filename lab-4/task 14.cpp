#include "iostream"
using namespace std;
int main(){
	int pay;
	cout<<"Enter your Pay scale ";
	cin>>pay;
	if(pay>=10000&& pay<20000){
	cout<<"You are Manager Operator ";
	}
	else if(pay>=20000&& pay<30000){
	cout<<"You are Manager  ";
	}
	else if(pay>=30000&& pay<40000){
	cout<<"You are Area Manager  ";
	}
	else if(pay>=40000&& pay<50000){
	cout<<"You are Regional Manager ";
	}
	return 0;
}
