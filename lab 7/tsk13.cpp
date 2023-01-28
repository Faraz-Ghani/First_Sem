/* make program which print only 2 digit numbers from given array
 by 20sw046 */
#include "iostream"
using namespace std;
int main(){
	int array[]={5,10,15,20,25,99,2,1,11};//array
	int size=sizeof(array)/sizeof(int);//finding size of array
	cout<<"The two digit numbers from array are given below "<<endl;
	for(int i=0; i<size; i++)
	{
	if(array[i]>9 && array[i]<100)//condition we know that nums between 9 and 100 are 2digits
	cout<<array[i]<<endl;
	}
	return 0;
}
