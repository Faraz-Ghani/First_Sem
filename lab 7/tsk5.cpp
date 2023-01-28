/* 
	Make a program it should print char array and also tells number of member of array
   by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{
	int members=0;//will used for counting
	char character[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	int size=(sizeof(character)/sizeof(char));//Finding size of array
	for(int i=0; i<size-1; i++){
		cout<<"Character at point ["<<i<<"]="<<character[i]<<endl;
		members++;//after every char passed plus one elemnt
	}
	cout<<"And total members or elements of char are "<<members;
		return 0;
}
