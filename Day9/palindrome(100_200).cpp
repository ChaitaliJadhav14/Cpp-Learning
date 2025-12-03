#include<iostream>
//Produce a list of Palindrome numbers between 100 and 200. 

using namespace std;
int main()
{
	int number,rno,i;
	for(number=100;number<=200;number++)//supplier
	{
	 int tnumber=number;//copy
	 rno=0;//reset
	 while(tnumber>0)//checker loop
	{
		int digit=tnumber%10;
		tnumber=tnumber/10;
		rno=rno*10+digit;
	}	
	if(number==rno)
		cout<<endl<<number;
   }
}


