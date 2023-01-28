#include "iostream"
using namespace std;
class myclass{
	public:
		int sum(float x, float y ){
			return x+y;
		}
		float sub(float x, float y ){
			return x-y;
		}
		float mul(float x, float y ){
			return x*y;
		}
		float div(float x, float y ){
			return x/y;
		}
};
int main()
{
	myclass z1;
	float first,second;
	char op;
	cout<<"Enter first number :";
	cin>>first;
	cout<<"Enter opperand :";
	cin>>op;
	cout<<"Enter second number :";
	cin>>second;
	switch(op){
		case '+':{
			cout<<"Addition of numbers is :"<<z1.sum(first,second);
			break;
		}
	case '-':{
		cout<<"Subtraction of numbers is :"<<z1.sub(first,second);
		break;
	}
	case '*':{
		cout<<"Multiplication of numbers is :"<<z1.mul(first,second);
		break;
	}
	case '/':{
		cout<<"division of numbers is :"<<z1.div(first,second);
		break;
	}
	default:{
		cout<<"Invalid input!";
		break;
	}
}
	return 0;
}
