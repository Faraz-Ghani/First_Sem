/* 
	Make a program it should ask user to enter  member of array with values 
	between 1 and 5 including itself and print elements if duplicate found remove that one.
   	by 20sw046
*/
#include "iostream"
using namespace std;
int main()
{
	int SIZE =5;//defining variable which will be used as size of array
	int array[SIZE];//array dec-
	int cheak=0;//will used to cheak whetther number is meeting requirement 
	cout<<"Enter number between 1 and 5"<<endl;
	for(int i=0; i<SIZE; i++){
	cout<<"Enter a number at position array["<<i<<"]:";
	cin>>array[i];////giving values to  array
	if(array[i] >0 && array[i]<6)//cheaking require condition
		{
		continue;//if passes the condition again repeat loop from here 
		}//end of if
			else
			{
			cout<<"Number should not be greater than 5 or less than 1"<<endl;
			cheak++;
			break;//if condition fails at anypoint terminate with above error no need to move forword
			}	 //end of else
	}//end of for loop
	if(cheak<1)//it cheaks if any time value of cheak increase that means 
				//any value greater than 5 or less than 1 is given so shoudn't do other stuffs
	{
		for(int i=0; i<SIZE; i++)//now start comparing for duplicates
		{
		int j=i+1;// making value of j to i plus 1 because we will compare first with 2nd one
			while(j<SIZE)
			{
				if(array[i]==array[j])//here suppose i=0; and j=1; means comparing first with 2nd 
				//if both equals
				{
				for(int k=j; k<SIZE-1; k++)
				array[k]=array[k+1];//giving rest of elements new value means next one and so on
				SIZE--;//and decreament in size beacuse we know if ones duplicate value finds size will be short
				}//end of loop k
				else
				j++;//if values aren't duplicate increase j and go to next member and cheak whole again
		
			}//end of while loop j
		}//end of for loop i
	
	cout<<"Numbers entered ARE given below without repeatation :"<<endl;
		for(int i=0; i<SIZE; i++)
		{
		cout<<array[i]<<endl;//printing values
		}//end of for
	}//end of if body
	return 0;
}
