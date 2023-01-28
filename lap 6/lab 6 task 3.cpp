/* make a function it should ask two integers from user by refernce 
then sets smaller of two to zero
by 20sw046 */
#include "iostream"
using namespace std;
void zeroSmaller(int&,int&);//function prototype or declearation of function
int main()
{
	int nmbr1,nmbr2;
	cout<<"Enter first number :";
	cin>>nmbr1;
	cout<<"Enter second number :";
	cin>>nmbr2;
	cout<<"Before calling function "<<endl;
	cout<<"First Number :"<<nmbr1<<endl<<"Second Number :"<<nmbr2<<endl;
	zeroSmaller(nmbr1,nmbr2);//calling of function
	
	//smaller number should be equal to zero
	cout<<"After calling function"<<endl;
	cout<<"First Number :"<<nmbr1<<endl<<"Second Number :"<<nmbr2<<endl;
	return 0;
}//end of main body
void zeroSmaller(int& num1,int& num2)//difining function 
{
	if(num1>num2)
	{
		num2=0;	
	}//end of if body
	else
	{
		num1=0;
	}//end of else body
}//end of function body
