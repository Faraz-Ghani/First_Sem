/* 
	Make a program it should print char array 
*/
#include "iostream"
using namespace std;
int main()
{
	char character[]={"abcde"};
	int size=(sizeof(character)/sizeof(char));//Finding size of array
	for(int i=0; i<size-1; i++)
	{
		cout<<"Character at point ["<<i<<"]="<<character[i]<<endl;
	}
	return 0;
}
