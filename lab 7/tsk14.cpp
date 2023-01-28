/* 
	Make a program in which give array as argument to function. 
	 by 20sw046
*/
#include<iostream>
#include "iomanip"
using namespace std;
const int size=3;
void Display(int array[size][size]);//function decleared here which has parameter 2d array 
int main(){
	int arr1[size][size];//initial 2d  array
	cout<<"Enter values Of matrix (3by3)"<<endl;
	for (int i=1; i<=size; i++){
		for (int j=1; j<=size; j++){
			cout<<"ENTER First Matrix place ["<<i<<"]["<<j<<"]:";
			cin>>arr1[i-1][j-1];//getting values at each point of array
	}
			}
		system("cls");
		Display(arr1);//calling function
return 0;
}
void Display(int array[size][size]){
		cout<<"|";//starting matrix
	for(int i=0; i<3; i++){	
		for(int j=0; j<3; j++){
			cout<<setw(4)<<array[i][j]<<"     ";
		}//calling a row
	cout<<"|\n|";//finishing with {|} and starting new
	}
	cout<<setw(28)<<"|";//finshing matrix
}
