/* make a function it should ask two integers from user  
then show value of maximum 
by 20sw046 */
#include "iostream"
using namespace std;
int max_two(int,int);//function prototype or declearation of function
int main()
{
	int nmbr1,nmbr2;
	cout<<"Enter first number :";
	cin>>nmbr1;
	cout<<"Enter second number :";
	cin>>nmbr2;
	cout<<"The maximum number is "<<max_two(nmbr1,nmbr2);//calling of function

	return 0;
}//end of main body
//function defining
int max_two(int num1,int num2)//function decleartor
{					//function body
	if(num1>num2)
	return num1;
	else
	return num2;
}//end of function body
