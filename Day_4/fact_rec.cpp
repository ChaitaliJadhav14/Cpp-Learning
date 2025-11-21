#include<iostream>
using namespace std;

int fact(int no)
	{
		if(no==1)
			return 1;
		else
			return no*fact(no-1);
       }
int main() 
{
	int no=6;
	//cout<<"\nFactorial of "<<no<<" is "<<fact(no);
	int fact=1;
	for(int i=1;i<no;i++)
	{
		fact=fact*i;
	}
	cout<<"\nFactorial of "<<no<<" is "<<fact;
}
