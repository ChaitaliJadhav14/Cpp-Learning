#include<iostream>
//Produce a list of prime numbers between 1 and 100. 

using namespace std;
int main()
{
	int number,i;
	bool flag=true;//set
	for(number=1;number<=100;number++)//supplier loop
	{
	flag=true;
	for(i=2;i<number;i++)	//checker loop
		{	
			if(number%i==0)//signal
				{
					flag=false;//reset
					break;
				}		
		}
	if(flag)//flag==true
		cout<<endl<<number<<" yes it is prime";
   }		
}

