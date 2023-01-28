/* 
	Make a program it should print index of f 2nd time repeated.
   by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{	int index=0;// to store the value of index of f
	int found=0;//used to take break when found required time
	char character[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	char f='f';//used to store required char 'f' for searching 
	//in future we can just cahnge value here for finding other elements
	int size=(sizeof(character)/sizeof(char));//Finding size of array
	for(int i=0; i<size-1; i++){
		if(character[i]==f){
		index=i;//giving value to index at i point when conditions meet.
		found++;//let known how many time found  if meet where terminate
		if(found==2)
		break;//used to terminate body other wise if f founded laterly new value will be stored
		}
	}
	cout<<"Position or index of 'f' for first time in array is:"<<index;
		return 0;
}
