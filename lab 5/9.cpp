#include <iostream>
using namespace std;
int main(){
	int fact=1;
	int num;
	cout<<"Enter number :";
	cin>>num;
	for(int i=num; i>0; i--){
		fact*=i;
		}
		cout<<"Factorial :"<<fact;
		
return 0;	
}
