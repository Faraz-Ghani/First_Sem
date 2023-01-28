#include "iostream"
using namespace std;
int main(){
	int var;
	cout<<"Enter number ";
	cin>>var;
	if(var%2==0 && var!=0){
		
		cout<<"number is even so after adding one result is "<<++var;
	}
	else if(var==0){
		var=var+10;
		cout<<"number is zero so after changing it to two figures and then cube of number is "
		<<var*var*var;
	}
	else if(var%2!=0){
		cout<<"number is odd so it's square is "<<var*var;
	}
	
	return 0;
}
