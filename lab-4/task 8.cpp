#include "iostream"
using namespace std;
int main(){
 string name,house_no,street,city,state,postal_code;
  cout<<"Enter your Full name : ";
  getline(cin,name);
  cout<<"Enter your house number  : ";
  getline(cin,house_no);
  cout<<"Enter your street : ";
  getline(cin,street);
  cout<<"Enter your city : ";
  getline(cin,city);
  cout<<"Enter your state : ";
  getline(cin,state);
  cout<<"Enter your postal code : ";
  getline(cin,postal_code);
  cout<<"your name is "<<name<<" and address is house no "<<house_no<<" "<<street
	  <<endl<<city<<" state "<<state<<" postal code is "<<postal_code;
	
	return 0;
}
