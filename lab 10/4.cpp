#include <iostream>
using namespace std;
class Employee{
	static int no;
	int count;
	public:
		Employee(){
		count=++no;
		}
		 void getdata(){
			cout<<"object no :"<<count<<endl;
		}
};
	int Employee::no=0;
int main(){
	Employee e1,e2,e3,e4;
		e1.getdata();
		e4.getdata();
	return 0;
}

