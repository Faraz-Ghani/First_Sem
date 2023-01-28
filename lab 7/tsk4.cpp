/* 
	Make a program it should print smallest number of array and its index
   by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{
	
int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);//finding size of array
	int smallest=array[0],index=0;
	for(int i=0; i<size; i++)
	{
		if(smallest>array[i])//it will cheak if new number is less then smallest 
		{
		smallest=array[i];//it assign new value to smallest
		index=i;//and index will also be updated
		}
		
	}
		cout<<"Smallest element of array is :" <<smallest<<" and it's index is :"<<index;
	return 0;
}
