#include <iostream>
using namespace std;
int main(){
char ch;
int count=0;
	for ( ch=97; ch<=122; ch++)
		{
			cout << ch <<" ";
		count++;
		if(count==10){
   cout<<endl;
count=0;}
}
return 0;
}
