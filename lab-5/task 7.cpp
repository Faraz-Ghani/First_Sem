#include "iostream"
using namespace std;
int main(){
	int i=3;//
	i++;//4
	cout<<i<<endl;//4
	++i;//5
	cout<<i<<endl;//5
	cout<<++i<<endl;//6 here 6is printed because i is incremented before calling 
	cout<<i++;//6here again 6 is printed because i is callout before increment
	return 0;
}
