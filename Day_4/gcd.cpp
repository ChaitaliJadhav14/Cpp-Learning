#include<iostream>
using namespace std;

int gcd(int no1,int no2)
	{
		if(no1%no2==0)
			return no2;
		else
			return gcd(no2,no1%no2);
       }
int main() 
{
	int no1,no2;
	cout<<"\n Enter the 2 numbers: \n";
	cin>>no1>>no2;
	if(no1>no2){
		int temp=no1;no1=no2;no2=temp;
	}

	cout<<"\nGCD of  "<<no1<<" , "<<no2<<"is"<<gcd(no1,no2);
}
