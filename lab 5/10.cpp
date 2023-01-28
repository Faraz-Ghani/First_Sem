#include <iostream>
using namespace std;
int main(){
//10a
for(int i = 0; i< 20; i++){
if(i % 2 == 0){
cout<<(i*2);
		}
	}
	//04812162024283236
cout<<endl;//10b
for(int i = 20; i> 0 ; i-- ){
if(i % 2 == 0){
	cout<<i;
}
}
//2018161412108642
cout<<endl;//10c
int mysteryInt = 100;
	for(int i = 5; i> 0;i-- ){
	mysteryInt-= i;
		cout<<(mysteryInt);
//9591888685
}
cout<<endl;//10d
for(int i = 5; i> 0;i-- ){
	int mysteryInt = 100;
	mysteryInt -= i;
cout<<(mysteryInt);
//9596979899
}
cout<<endl;//10e
int mystery_Int = 1;
int counter=1;
while(mystery_Int<3) {
		mystery_Int = mystery_Int* counter;
		counter++;
		}//6
cout<<(mystery_Int);


return 0;
}

