#include "iostream"
using namespace std;
int main(){
	int quiz1,quiz2,quiz3,mid_term,final;
	cout<<"Results : ======== Quizzes ========="<<endl;
	cout<<"Enter the score of the first quiz : ";
	cin>>quiz1;
	cout<<"Enter the score of the second quiz : ";
	cin>>quiz2;
	cout<<"Enter the score of the Third quiz : ";
	cin>>quiz3;
	cout<<endl<<"======Midterm=========="<<endl;
	cout<<"Enter the score of  Mid-term  : ";
	cin>>mid_term;
	cout<<endl<<"======final=========="<<endl;
	cout<<"Enter the score of  final  : ";
	cin>>final;
	cout<<endl<<"Quiz Total : "<<quiz1+quiz1+quiz1<<endl;
	cout<<"mid-term : "<<mid_term<<endl;
	cout<<"final : "<<final<<endl;
	cout<<endl<<".............."<<endl;
	cout<<"Total : "<<final+mid_term+quiz1+quiz1+quiz1;
	return 0;
}
