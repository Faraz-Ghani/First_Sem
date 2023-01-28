/* make program to get 5 names as input by using array and 
then give user to search any name and tells the user that is name is part of array
 by 20sw046 */
#include "iostream"
using namespace std;
int main(){
	const int size=5;//used for size of array
	string array[size];//decleare array of strings
	string name;//used for camparing
	string cheak;//used for getting output
	for(int i=0; i<size; i++)
	{
	cout<<"Enter any name :";
	getline(cin,array[i]);//used getline to get full name also
	}
	cout<<"Enter name you want to search :";
	getline(cin,name);//used getline to get fill name also
	for(int j=0; j<size; j++)
	{
		if(name==array[j])
		{
		cheak="name is found";//if name matched change values of cheak
		break;//if name found break statement here otherwise value of cheak will be changed again
		}
		else
		{
		cheak="name is not found!";//when condition of if not matched 
		}
	}
		cout<<cheak;//give statement found or not:
		return 0;
}
