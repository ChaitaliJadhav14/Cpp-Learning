#include<iostream>
//Digit wise whether the given number is palindrome or not. 
//121  ---121
//read a number,create copy,reverse copy. compare reverse and orignal and comment
using namespace std;
int main()
{
	int number,tnumber,cube=0,arm=0;

	cout<<"\nEnter a number:";
	cin>>number;
	tnumber=number;//copy
	
	while(number>0)
	{
		int digit=number%10;  //extract last digit

		cube=digit*digit*digit;
		arm=arm+cube;
		number=number/10;   //remove last digit
	}
	
	if(tnumber==arm)
		cout<<endl<<tnumber<<" yes it is armstrong.";
	else
		cout<<endl<<tnumber<<" no it is not armstrong.";
		
		
}


