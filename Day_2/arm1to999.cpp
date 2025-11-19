#include<iostream>
#include<cmath>
//Print all Armstrong numbers between 100 to 999. 
using namespace std;
int main()
{
	int number,tnumber,sum=0;
	for(number=100;number<=999;number++)//supplier
	{
	  tnumber=number;//reset
	  sum=0;//reset
	  while(tnumber>0)//checker
	  {
		int digit=tnumber%10;
		sum=sum+pow(digit,3);
		tnumber=tnumber/10;
	  }
	
	if(number==sum)
		cout<<endl<<number<<" is armstrong";
    }
		
		
}


