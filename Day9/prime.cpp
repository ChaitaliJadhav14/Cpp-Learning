//prime

#include<iostream>
using namespace std;
int main()
{
	int number,i;
	bool flag=true;//set
	cout<<"\nEnter a number:";
	cin>>number;
	for(i=2;i<number;i++)	
		{
			
			if(number%i==0)//signal
				{
					flag=false;//reset
					break;
				}
				cout<<"\ndiv with "<<i<<" flag is:"<<flag;
		}
	if(flag)//flag==true
		cout<<endl<<number<<" yes it is prime";
	else
		cout<<endl<<number<<" no it is not prime";
		
		
}

