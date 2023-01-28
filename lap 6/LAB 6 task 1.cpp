/* make a program it should ask name from user then
 display hello with his name by help of function 
 by 20sw046*/
#include "iostream"
using namespace std;
void Name(string);//function prototype or declearation of function
int main()
{ 
	string your_name;
	cout<<"What's your name:";
	getline(cin,your_name);
	Name(your_name);//call of function
	return 0;
}//end of main Body
	void Name(string name)//difining function
	{	
	cout<<"Hello "<<name;
	}	//end of function body

