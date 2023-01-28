#include <iostream>
using namespace std;

class cheak{
private:
	string name;
	static int number;
	int member;

public:
cheak(){member = ++number;
}

void setname(string x){
	name=x;
}
string getname(){
	return name;
}
void get_number() {
cout << "I am MEMBER NO: " <<member << endl;
}
};


int cheak::number = 0;

int main() {
string x,y,z;
int n;
cout<<"Enter your name buddy1 :";
cin>>x;
cheak c1,c2,c3;
c1.setname(x);
cout<<"\nEnter your name buddy2 :";
cin>>y;
c2.setname(y);
cout<<"\nEnter your name buddy3 :";
cin>>z;
c3.setname(z);
cout<<"\nwhose data you want :\n 1 for first member \n 2 for second member\n 3 for third member\n";
cin>>n;
switch(n){
	case 1:
	{
		cout<<"Your name :"<<c1.getname()<<endl;
		c1.get_number();
		break;
	}
	case 2:{
		cout<<"Your name :"<<c2.getname()<<endl;
		c2.get_number();
		break;
	}
	case 3:{
		cout<<"Your name :"<<c3.getname()<<endl;
		c3.get_number();
		break;
	}
	default:{
		cout<<"Invalid input";
		break;
	}
}
return 0;
}
