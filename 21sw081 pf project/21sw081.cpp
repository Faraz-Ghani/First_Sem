#include<iostream>
#include<string>
#include <stdlib.h>
#include<fstream>//for filing
#include<sstream>//for converting string to int
#include<windows.h>//for sleep
#include<conio.h>//for getch
using namespace std;
float TOTAL=0;
int itemnumber=0;
int ItemAmount[20];
int ItemID[20];
int ItemPrice[20];
//classs 

class account{
   private:
   	string Name="Admin";
   	int Priv;
   	public:
   	void setName(string name){
   		Name=name;
	   }
	string getName(){
		return Name;
	}
	void setPriv(int priv){
		Priv=priv;
	}   
	int getPriv(){
		return Priv;
	}
};

//classs

	account user1;
//admin
    void admin(){
    int id;
    
    string input,price;
    
    cout<<"\t\t\t\t\tWhich Item ID would you like to edit? :"<<endl;
    
		ifstream item;
      	item.open("LIST.txt");
      	string line;
      	//printing list of items price and codes
		for(int i=0;i<=27;i++)
      {
      	getline(item,line);
      	cout<<"\t\t\t\t"<<line<<endl;
	  }
	  item.close();//error somewhere here
	  //getting the id you want to replace
   cout<<"\t\t\t\tWhich ID would you like to edit?";
    cin>>id;
   id+=3;
   //replacing the data
   
    
  //editing display txt file
     ifstream infile ("LIST.txt");
     ofstream outfile("TEMP.txt");
  if (infile.is_open() && outfile.is_open())
  {
    for (int lineno = 0; getline (infile,input) && lineno < 27; lineno++)
    if(lineno!=id){
    	outfile<<input<<"\n";
	}
    
    
     else if (lineno ==id){
      	cout<<"\t\t\t\tWhat would you like the new price of\n\t\t\t\t"<<input<<" be:\n\t\t\t\t\t";
      	cin>>price;
        input.replace(18,10,price);  
		outfile<<input<<"\n"; 
	  }
    infile.close();
    outfile.close();
  }
 else cout << "Can not open the file";
    //renaming the file and deleting the old files
    system("cls");
    cout<<"\t\t\t\tFile edited succesfully\n";
    remove("LIST.txt");
    rename("TEMP.txt","LIST.txt");
system("pause");    
}
	
//checkout
    void Checkout(int PRIV){
    system("cls");
    ofstream receipt;
    receipt.open("receipt.txt");
    receipt <<"\t\t\t\t__________________        "<<endl;
	receipt<<"\t\t\t\t                          "<<endl;
	receipt<<"\t\t\t\tANUSHA'S SUPER MARKET     "<<endl;
	receipt<<"\t\t\t\t__________________        "<<endl;
	if(PRIV==2){
	receipt<<"\t\t\t\t"<<user1.getName();	
	}
	else{
	receipt<<"\t\t\t\tMr/Mrs."<<user1.getName();
	
	}
	receipt<<" Your Bill is : "<<endl<<endl<<endl;
	receipt<<"\t\t\t\t ID     AMOUNT    PRICE "<<endl;\
	
	for(int i=0;i<itemnumber;i++){
	receipt<<"\t\t\t\t "<<ItemID[i]<<"         "<<ItemAmount[i]<<"       "<<ItemPrice[i]<<"$ "<<endl;
	}
	
	receipt<<"\t\t\t\t TOTAL\t       "<<TOTAL<<endl<<endl<<endl;
    if(PRIV==2 && TOTAL>100){
    	
		TOTAL=TOTAL-15;
    	receipt<<"\t\t\tAter applying 15$ Empolyee discount your total is :"<<TOTAL<<"$"<<endl;
        
	}

	cout<<"\t\t\tYour receipt has been created in txt file please pay with cash.";
	system("pause");	

	}
	
	
//cart menu		
	
	int Cart(int PRIV){
	int CHOICE;
	system("cls");
	cout<<"\t\t\t\t__________________        "<<endl;
	cout<<"\t\t\t\t                          "<<endl;
	cout<<"\t\t\t\tANUSHA'S SUPER MARKET     "<<endl;
	cout<<"\t\t\t\t__________________        "<<endl;
	if(PRIV==2){
	cout<<"\t\t\t\t"<<user1.getName();
	}
	else{
	cout<<"\t\t\t\tMr/Mrs."<<user1.getName();
	}
	cout<<" Your Bill is : "<<endl<<endl<<endl;
	cout<<"\t\t\t\t ID     AMOUNT    PRICE "<<endl;\
	
	for(int i=0;i<itemnumber;i++){
	cout<<"\t\t\t\t "<<ItemID[i]<<"         "<<ItemAmount[i]<<"       "<<ItemPrice[i]<<"$ "<<endl;
	}
	
	cout<<"\t\t\t\t TOTAL\t       "<<TOTAL<<endl<<endl<<endl;
    if(PRIV==2 && TOTAL>100){
    	
		TOTAL=TOTAL-15;
    	cout<<"\t\t\tAter applying 15$ Empolyee discount your total is :"<<TOTAL<<"$"<<endl;
        
	}
	cout<<"\t\t\t\t1)Proceed to checkout or 2)Exit program";
    cin>>CHOICE;
    switch(CHOICE){
    	case 1: Checkout(PRIV);
    	break;
    	case 2: return 0;
	    break;
	    
	}
	
	}

//addition of times	
	
	void Additem(int PRIV){
		PP:
		system("cls");
        string priceline;
        int price=0;
        	int choice;
		ifstream item;
      	item.open("LIST.txt");
      	string line;
      	//printing list of items price and codes
		for(int i=0;i<=27;i++)
      {
      	getline(item,line);
      	cout<<"\t\t\t\t"<<line<<endl;
	  }
	  cout<<"\t\t\t\tWhat would you like to add to your cart?(INPUT ID) : ";
	  cin>>ItemID[itemnumber];
	  if(ItemID[itemnumber]>23){
	  	cout<<"\t\t\t\tInvalid input please wait ";
	  	Sleep(2000);
		  goto PP;
	  }
   
   
   //how many?
cout<<"\t\t\t\tHow many would you like? : ";
cin>>ItemAmount[itemnumber];


//Getting value from database
  ifstream file ("LIST.txt");
  if (file.is_open())
  {
    for (int lineno = -3; getline (file,priceline) && lineno < 25; lineno++)
    
      if (lineno == ItemID[itemnumber]){
     priceline.erase(0,18);   
	 istringstream (priceline)>>ItemPrice[itemnumber];
	  }
	file.close();
  }
 else cout << "Can not open the file"; 



//totaling
          TOTAL+=ItemPrice[itemnumber]*ItemAmount[itemnumber]; 
          itemnumber++;
//how many
choicegoto:
cout<<endl<<"\t\t\t\tWould you like to 1)add more,2)check your cart or 3)continue to checkout? :";
cin>>choice;
switch (choice){
     case 1:
     	goto PP;
     	break;
     case 2:
	    Cart(PRIV);
		break;
	case 3:
	Checkout(PRIV);
	break;
	default:
	goto choicegoto;
	break;		
}
	}
    	
    	
   

//customer page
	    int Customer(int PRIV){
		int Choose;PP:
		system("cls");
		cout<<"\t\t\t\t\tWhat would you like to do? : "<<endl;
	    cout<<"\t\t\t\t\t1)Cart"<<endl;
        cout<<"\t\t\t\t\t2)Add item"<<endl;
        cout<<"\t\t\t\t\t3)Proceed to checkout"<<endl;
        cout<<"\t\t\t\t\t4)Exit"<<endl;
        if(PRIV==2){
        cout<<"\t\t\t\t\t5)Edit Items"<<endl;
		}
		cin>>Choose;
		switch(Choose){
			case 1:
				Cart(PRIV);
				break;
			case 2:
			    Additem(PRIV);
			    break;
			case 3:
			    Checkout(PRIV);
			    break;
		    case 4:
			    return 0;
			    break;
			case 5:
				admin();
				break;
			default :
			    goto PP;
				break;		
		
		}		
		}
		
	//empolyee login
 	int login(int PRIV){
    login:
    string user,pass="";
    char c;  

	
    system("cls");
    cout<<"\t\t\t\t\tEMPOLYEE LOGIN PAGE"<<endl<<endl<<endl;
	cout<<"\t\t\t\tPlease Enter your Username and Password :"<<endl;
    cout<<"\t\t\t\tUser: ";
	cin>>user;
	cout<<endl;
	cout<<"\t\t\t\tPass: ";
       
//login check
    p:
	c = _getch();
	cout << "*";   //for printing * instead for password
	if (c != 13)
	{
		pass = pass + c;  //for concatenating the string
		goto p;
	}
string un,pw;
    	ifstream myfile;
	myfile.open("login.txt");
	getline(myfile, un);
	getline(myfile, pw);

	if (user == un && pass == pw)
	{
		cout << "\n\n\t\t\t\tLogin Sucessfully...!! \n\n";
		cout << "\n\t\t\t\t";
		system("PAUSE");
        
    Customer(PRIV);
	}
	else
	{
		cout << "\n\n\t\t\t\tLogin Failed...!! \n\n";
		cout << "\n\t\t\t\t";
		
		system("PAUSE");
		
	goto login;
	}
    system("cls");
  
  }

	void menu(int& PRIV){
	int priv;
	system("color B0");
AA:
		system("cls");
	cout<<"\t\t\t\t__________________        "<<endl;
	cout<<"\t\t\t\t                          "<<endl;
	cout<<"\t\t\t\tANUSHA'S SUPER MARKET     "<<endl;
	cout<<"\t\t\t\t__________________        "<<endl;
	cout<<"\t\t\t\tWELCOME! PLEASE LOGIN"<<endl;
	cout<<"\t\t\t\t0)EXIT PROGRAM"<<endl;
	cout<<"\t\t\t\t1)CUSTOMER"<<endl;
	cout<<"\t\t\t\t2)EMPLOYEE"<<endl<<"\t\t\t\t";
	cin>>PRIV;
	if(PRIV>2){
		goto AA;
	}
	system("cls");
	}
	//INPUT
	
int main(){
	CHOOSE:
	int PRIV;
	menu(PRIV);
	string name;
	char namE[20];
	//name set
	
     if(PRIV==0){
		return 0;
	}
	//customer set
	else if(PRIV==1){
    cout<<"\t\t\t\tWhat is your name : ";
	cin.ignore(); cin.getline(namE,20);
    user1.setName(namE);	
	Customer(PRIV);
	}
	//login for admin
	else if(PRIV==2){
	 int choice;
	admin:
 
    system("cls");
	cout<<"\t\t\t\tWhat would you like to do? :"<<endl;
	cout<<"\t\t\t\t1)Login"<<endl;
    cout<<"\t\t\t\t2)return to selection "<<endl<<"\t\t\t\t";
    cin>>choice;
	switch (choice){ 
	 case 1:
	 system("cls");
	 login(PRIV);
	 break;
	 case 2:
	 goto CHOOSE;
	 break;
	 default:
	 goto admin;
	 break;	
	}}
	//exit program
	else if(PRIV==0){
		return 0;
	}
	//set priviliges
    user1.setPriv(PRIV);
	
}
