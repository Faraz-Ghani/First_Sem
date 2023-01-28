#include <iostream>
using namespace std;
int main(){
char ch;
char first;
char last;
int count=0;
cout<<"Enter first character :";
cin>>first;
cout<<"Enter Last character :";
cin>>last;
cout<<"Characters between \""<<first<<"\" and \""<<last<<"\" are:";
	for ( ch=first+1; ch<last; ch++)
		{
			cout<<ch<<" ";
		count++;
		}
	cout<<"\nAnd Characters count :"<<count;
		return 0;
	}
