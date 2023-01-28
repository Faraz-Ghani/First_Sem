/* 
	Make a program it should tell occurence of each element.
   by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0;// to store the value how many time occured
	char character[]={"abcdefghijk abcdefghijk abcdefghijk abcdefghijk"};
	int size=(sizeof(character)/sizeof(char));//Finding size of array
	for(int x=0; x<size-1; x++){
		if(character[x]=='a')
		a++;//add value when found required value
		if(character[x]=='b')
		b++;//add value when found required value
		if(character[x]=='c')
		c++;//add value when found required value
		if(character[x]=='d')
		d++;//add value when found required value
		if(character[x]=='e')
		e++;//add value when found required value
		if(character[x]=='f')
		f++;//add value when found required value
		if(character[x]=='g')
		g++;//add value when found required value
		if(character[x]=='h')
		h++;//add value when found required value
		if(character[x]=='i')
		i++;//add value when found required value
		if(character[x]=='j')
		j++;//add value when found required value	
		if(character[x]=='k')
		k++;//add value when found required value
	}
	cout<<"Occurence of char 'a' in array is "<<a<<endl;
	cout<<"Occurence of char 'b' in array is "<<b<<endl;
	cout<<"Occurence of char 'c' in array is "<<c<<endl;
	cout<<"Occurence of char 'd' in array is "<<d<<endl;
	cout<<"Occurence of char 'e' in array is "<<e<<endl;
	cout<<"Occurence of char 'f' in array is "<<f<<endl;
	cout<<"Occurence of char 'g' in array is "<<g<<endl;
	cout<<"Occurence of char 'h' in array is "<<h<<endl;
	cout<<"Occurence of char 'i' in array is "<<i<<endl;
	cout<<"Occurence of char 'j' in array is "<<j<<endl;
	cout<<"Occurence of char 'k' in array is "<<k<<endl;
	
		return 0;
}
