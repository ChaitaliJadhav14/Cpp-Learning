#include<iostream>
//beaking digits
using namespace std;
int main()
{
	int number,sum=0,rno=0;
	cout<<"\nEnter a number:";
	cin>>number;
	while(number>0)
	{
		int digit=number%10;
		number=number/10;
		sum = sum + digit;
		rno=rno*10+digit;
		cout<<"\nnumber:"<<number<<"\tdigit:"<<digit;
		                            //5 blank space
	
	}
		cout<<"\nSum of digit is:"<<sum;
		cout<<"\nreverse number of digit is:"<<rno;
		
}




