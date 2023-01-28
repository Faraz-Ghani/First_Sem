#include "iostream"
using namespace std;
void insert(int[],int);
int main(){
	int data;
	cout<<"Enter size of array want :"; cin>>data;
	int myarray[data];
	insert(myarray,data);
	return 0;
}
void insert(int array[], int data){
	for(int i=0; i<data; i++){
	cout<<"Enter value of array at position ["<<i<<"]:";
	cin>>array[i];
	}
}
