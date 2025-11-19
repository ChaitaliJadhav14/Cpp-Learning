#include<iostream>
//Digit wise whether the given number is palindrome or not. 
//121  ---121
//read a number,create copy,reverse copy. compare reverse and orignal and comment
using namespace std;
int main()
{
	int number,tnumber,rno=0;

	cout<<"\nEnter a number:";
	cin>>number;
	tnumber=number;//copy
	
	while(number>0)
	{
		int digit=number%10;
		number=number/10;
		rno=rno*10+digit;
		cout<<"\nnumber:"<<number<<"\tdigit:"<<digit<<"\trno="<<rno;
		                            //5 blank space
	}
	
	if(tnumber==rno)
		cout<<endl<<tnumber<<" yes it is palindrome.";
	else
		cout<<endl<<tnumber<<" no it is not palindrome.";
		
		
}


