#include <iostream>
using namespace std;
int main(){
	cout<<"Vowels \t\t\t Consonants \n";
	for(int i=65; i<=90; i++){
		if(char(i)=='A'||char(i)=='E'||char(i)=='I'||char(i)=='O'||char(i)=='U')
		cout<<char(i);
		else cout<<" \t\t\t "<<(char)i<<endl;
	}
		
return 0;	
}
