#include "iostream"
using namespace std;
int main(){
	float no_of_classes_held,no_of_classes_attended,percentage;
		cout<<"Enter no of classes held : ";
		cin>>no_of_classes_held;
		cout<<"Enter no of classes attended : ";
		cin>>no_of_classes_attended;
		percentage=no_of_classes_attended/no_of_classes_held*100;
		cout<<"Percentage of classes attended is : "<<percentage<<"%"<<endl;
		if(percentage>=75){
			cout<<"You are  allowed to sit in exams";
		}
		else{
			cout<<"You are not allowed to sit in exams";
		}
	
	
	return 0;
}
