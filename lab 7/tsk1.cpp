/* make a program it should print sum of members of given array
 by 20sw046*/
#include "iostream"
using namespace std;
int main()
{
	int array[]={5,10,15,20,25};
	int size=sizeof(array)/sizeof(int);//finding size of array
		int sum=0;//initial sum is zero
	for(int i=0; i<size; i++)
	{
		sum+=array[i];//adding elements of array with variable sum
	}
		cout<<"Sum of elements of array is :"<<sum;
	return 0;
}
