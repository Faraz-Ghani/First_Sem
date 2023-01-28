/* make a program it should print  elements of array in reverse order
 by 20sw046*/
#include "iostream"
using namespace std;
int main()
{
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);//finding size of array
	cout<<"Elements of array in reverse order are :"<<endl;
	for(int i=size-1; i>=0; i--)
	//loop cheaks value of size initial value of i is size-1 = last element of array then decrement for reverse order  
	{
		cout<<array[i]<<endl;//printing elements in reverse direction
	}
		
	return 0;
}
