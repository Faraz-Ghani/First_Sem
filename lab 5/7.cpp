#include <iostream>
using namespace std;
int main(){
	int sum=0,count=0;
	float average;
	for(int i=1; i<=100; i++){
	sum+=i;
	count++;
	}
		cout<<"The Sum is :"<<sum<<endl;
		cout<<"The Average is :"<<float(sum/count);
return 0;	
}
