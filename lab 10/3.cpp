#include <iostream>
using namespace std;
class Employee{
	int no;
	float salary;
	public:
		void setno(int x){
			no=x;
		}
		void setsalary(float x){
			salary=x;
		}
		int getno(){
			return no;
		}
		float getsalary(){
			return salary;
		}
};
int main(){
	Employee e1,e2,e3;
	int x,y,z;
	float a,b,c;
	cout<<"Enter no of first employee :";
	cin>>x;
	e1.setno(x);
	cout<<"Enter salary of first employee :";
	cin>>a;
	e1.setsalary(a);
	cout<<"Enter no of second employee :";
	cin>>y;
	e2.setno(y);
	cout<<"Enter salary of second employee :";
	cin>>b;
	e2.setsalary(b);
	cout<<"Enter no of Third employee :";
	cin>>z;
	e3.setno(z);
	cout<<"Enter salary of Third employee :";
	cin>>c;
	e3.setsalary(c);
	system("cls");
	cout<<"Id no of first employee is :"<<e1.getno()<<" and his salary is :"<<e1.getsalary()<<endl;
	cout<<"Id no of second employee is :"<<e2.getno()<<" and his salary is :"<<e2.getsalary()<<endl;
	cout<<"Id no of third employee is :"<<e1.getno()<<" and his salary is :"<<e1.getsalary()<<endl;

return 0;
}
