#include<iostream>
using namespace std;
class Account
{
  private:
	string name,gender;
	int account_no;
	float amount;
	static int account_no_generator;
  public:

	void open_account(string n,string g,float a)
		{
			name=n;
			gender=g;
			amount=a;
			account_no=++account_no_generator;
			cout<<"\n"<<name<<" your account is active now remeber account number is:"<<account_no;
		}
	void check_balance()
	{
		cout<<"\nAccount Number:"<<account_no;
		cout<<"\nAccount Holder:"<<name;
		cout<<"\nAccount Balance:"<<amount;
	}
	//deposit will accept amount and then add it to balance amount if not -ve else error shown
	void deposit(float amt)
	{
		if(amt<0)//-ve
			cout<<"\nAmount can not be -ve";
		else
		{
			amount+=amt;
			cout<<"\nTransection done.";
			check_balance();
		}
	}
	//withdraw take amount and remove it from balance iff balance doesnt go -ve
    void withdraw(float amt)
	{
		if(amount-amt<0)//-ve
			cout<<"\ncan not perform this not sifficient balance";
		else
		{
			amount-=amt;
			cout<<"\nTransection done.";
			check_balance();
		}
	}
	
	int get_account_no()
	{
		return account_no;
	}
	
	
};
//for static members it is must to show it outside class
int Account::account_no_generator=25000;//init to some number
	
int main() 
{
 int accounts=0;
 Account a[100];
 string name, gender;
 float amount;
 int choice;
 bool flag;
 int acc_no;//to search
 
 do
 {
 	cout<<"\n---------------";
 	cout<<"\nDena Bank";
 	cout<<"\n---------------";
 	cout<<"\n1.Open Account";
 	cout<<"\n2.Deposite";
 	cout<<"\n3.Withdraw";
 	cout<<"\n4.Check Balance";
 	cout<<"\n0.Exit";
 	cout<<"\n---------------";
 	cout<<"\n:";
 	cin>>choice;
 	switch(choice)
 	{
 		case 1:
 				cout<<"\nEnter Name,Gender and amount:"	;
 				cin>>name>>gender;
 				do{
 					cout<<"Enter amount (min 5000):";
 					cin>>amount;
				 }while(amount<5000);
 				a[accounts].open_account(name,gender,amount);
 				accounts++;
 				break;
 		case 2:
 				flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<accounts;i++)
 				  {
				   if(acc_no==a[i].get_account_no())
 						{
 						 flag=true;
 						 a[i].check_balance();
						 cout<<"\nEnter amount to deposit:"	;
						 cin>>amount;
						 a[i].deposit(amount);
						 break;
					     }
					}
					if(flag==false)
						cout<<endl<<acc_no<<" Not found....";
 				break;
 		case 3: 
 				flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<accounts;i++)
 				  {
				   if(acc_no==a[i].get_account_no())
 						{
 						 flag=true;
 						 a[i].check_balance();
						 cout<<"\nEnter amount to withdraw:"	;
						 cin>>amount;
						 a[i].withdraw(amount);
						 break;
					     }
					}
					if(flag==false)
						cout<<endl<<acc_no<<" Not found....";
 				break;
 		case 4: 
 			   flag=false;
 				cout<<"\nEnter account number:";
 				cin>>acc_no;
 				for(int i=0;i<accounts;i++)
 				  {
				   if(acc_no==a[i].get_account_no())
 						{
 						 flag=true;
 						 a[i].check_balance();
						 break;
					     }
					}
					if(flag==false)
						cout<<endl<<acc_no<<" Not found....";
 				break;
 		case 0:
 				cout<<"Exiting....";
 				break;
 		default:
 				cout<<"Wrong choice given..";
 				break;
	 }
 }while(choice!=0);//exit
 //Menu: 1.create account 2.deposit 3.withdraw 4.check balance
}


