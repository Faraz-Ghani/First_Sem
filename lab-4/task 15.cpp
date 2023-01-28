#include "iostream"
using namespace std;
int main(){
	int marks_en,marks_ee,marks_cpp;
	float percentage;
	cout<<"Enter your obtained Marks in English ";
	cin>>marks_en;
	cout<<"Enter your obtained Marks in EE ";
	cin>>marks_ee;
	cout<<"Enter your obtained Marks in C++ ";
	cin>>marks_cpp;
	cout<<"Your total obtained marks out of 300 are "
	<<marks_en+marks_ee+marks_cpp<<endl;
	percentage=(float)(marks_en+marks_ee+marks_cpp)/300*100;
	cout<<"your percentage is "<<percentage<<" %"<<endl;
	if(percentage>=90){
	cout<<"Grade: A";
	}
	else if(percentage<90 && percentage>=80){
	
		cout<<"Grade: B";
	}
	else if(percentage<80 && percentage>=70){
	
		cout<<"Grade: C";
	}
	else if(percentage<70 && percentage>=60){
	
		cout<<"Grade: D";
	}
	else {
		cout<<"Grade: FAIL";
	}

	return 0;
}
