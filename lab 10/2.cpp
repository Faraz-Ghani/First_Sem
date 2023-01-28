#include <iostream>
using namespace std;
class myclass{
	int member;
	public:
		void setdata(){
			member=0;
		}
		void setdata(int x){
			member=x;
		}
		int getdata(){
			return member;
		}
};
int main(){
	myclass c1;
	int x=0;
	char ch;
	cout<<"do you want to give value (y/n) :";
	cin>>ch;
	if(ch=='y'||ch=='Y'){
	cout<<"Enter number :";
	cin>>x;}
	c1.setdata(x);
	cout<<"number is :"<<c1.getdata();
return 0;
}
