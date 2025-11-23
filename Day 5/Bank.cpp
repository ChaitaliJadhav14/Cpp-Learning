#include<iostream>
using namespace std;
class Account
{
  private:
	string name,gender;
	float amount;
	int account_no;
	static int account_no_generator;
  public:

	void open_Account(string n,string g,float amt)
		{
			name=n;
			gender=g;
			amount=amt;
			account_no=++account_no_generator;
			cout<<"\n"<<name<<" your account is active now remember account number is "<<account_no;
		}
	
	//getter
	void check_balance()
		{
			cout<<"\nAccount number:"<<account_no<<"\nAccount holder :"<<name<<" \nAccount balance:"<<amount;
		}
	//deposit will accept and then add it to balance amount if not -ve show bank balance
	void deposit(float amt){
		if(amt<0)
			cout<<"\nAmount can not be -ve";
		else{
			amount+=amt;
			cout<<"\nTransaction done";
			check_balance();
		}
		
	}
	//withdraw take amount and remove it from balance if balance deposit go -ve
	void withdraw(float amt){
		if(amount-amt<0)
			cout<<"\ncan not perform this not sufficient balance.";
		else{
			amount-=amt;
			cout<<"\nTransaction done";
			check_balance();
		}
		
	}
		
};
//for static members it is must to show it outside class
int Account::account_no_generator=2500;//init to some number
	
int main() 
{
Account a1,a2;
a1.open_Account("CHAITALI","f",12000);
a1.check_balance();
a1.deposit(5000);
a1.withdraw(2000);
a1.withdraw(2000000);
 
}



