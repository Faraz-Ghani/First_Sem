/* make a function it should ask two integers from user by value 
then swap their values*/
//by 20sw046
#include "iostream"
using namespace std;
void swap(int,int);//function prototype or declearation of function
int main()
{
	int nmbr1,nmbr2;
	cout<<"Enter first number :";
	cin>>nmbr1;
	cout<<"Enter second number :";
	cin>>nmbr2;
	cout<<"Before calling function "<<endl;
	cout<<"First Number :"<<nmbr1<<endl<<"Second Number :"<<nmbr2<<endl;
	cout<<"After calling function"<<endl;
	swap(nmbr1,nmbr2);//calling of function

	return 0;
}//end of main body
void swap(int num1,int num2)//difining function 
{
	int x=num1;
	num1=num2;
	num2=x;		
	cout<<"First Number :"<<num1<<endl<<"Second Number :"<<num2<<endl;
}//end of function body
