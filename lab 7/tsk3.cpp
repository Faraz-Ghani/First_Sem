/* 
	Make a program it should print 2nd last element of array and  also
   sum of last and 2ndlast element as well as their product
   by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);//Finding size of array
	//Initializing value we know that size-1=last element and size-2= second last element
	int last_element=array[size-1];
	int second_last_element=array[size-2];
	cout<<"The 2nd last element of array is :"
	<<second_last_element<<endl//Printing 2ndlast element
	<<"SUM of last and 2nd last element of array is :"
	<<second_last_element+last_element<<endl//Printing sum of last and 2ndlast element
	<<"Product of last and 2nd last element of array is :"
	<<second_last_element*last_element;//Printing product of last and 2ndlast element
		return 0;
}
