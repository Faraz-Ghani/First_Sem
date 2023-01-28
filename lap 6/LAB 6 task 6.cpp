/* try to explain call by value and call by refernce with help of any program
by 20sw046 */
#include "iostream"
using namespace std;
void value_constant(int ,int);//intilization of function
void reference_constant(int&, int&);//intilization of function
int main()
{
	//try to explain call by value below
	cout<<"Call by value "<<endl;
	int num1=4,num2=8;//i will use them for call by value function arguments
	cout<<"Before calling function values are :"<<num1<<" and :"<<num2<<endl;	
	value_constant(num1,num2);//calling function
	cout<<"After calling function values are :"<<num1<<" and :"<<num2<<endl;
	/* here we can see that values didnot changed becuase it is call by value 
	function where original values didnot changed */
	
	//try to explain call by reference below
	cout<<"\n\nCall by reference "<<endl;
	int num3=32,num4=43;//i will use them for call by reference function arguments
	cout<<"Before calling function values are :"<<num3<<" and :"<<num4<<endl;	
	reference_constant(num3,num4);//calling function
	cout<<"After calling function values are :"<<num3<<" and :"<<num4<<endl;
		/* here we can see that values changed becuase it is call by refernce 
	function where function values store in real variables*/
}
void value_constant(int a ,int b)//it changes the values of given var by call by value to 1,2:
{
	a=1; b=2;//body of function
}
void reference_constant(int& a ,int& b)//it changes the  values of given var by call by reference to 1,2:
{
	a=1; b=2;//body of function
}
