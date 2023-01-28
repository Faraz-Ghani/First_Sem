/* make a program it should ask first and last name from user
then return and print its value 
by 20sw046*/
#include "iostream"
using namespace std;
string Name(string,string);//function prototype or declearation of function
int main()
{ 
	string first_name,last_name;
	cout<<"What is your first-name:";
	cin>>first_name;
	cout<<"What is your last-name:";
	cin>>last_name;
	cout<<"Your full name is :"<<Name(first_name,last_name);//call of function
	return 0;
}//end of main Body
	string Name(string fname,string lname)//difining function
	{	
		string result=fname+" "+lname;
		return result;
	}	//end of function body

