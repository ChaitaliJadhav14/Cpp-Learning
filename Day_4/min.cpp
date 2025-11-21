#include<iostream>
using namespace std;

int min(int no1,int no2)
{
	if(no1<no2)
		return no1;
	else	
		return no2;
}
int main()
{
int no1,no2;
cout<<"\nEnter 2 numbers:\n";
cin>>no1>>no2;

int min_is=min(no1,no2);//use variable to store
cout<<"\nmin is:"<<min_is;

//or
cout<<"\nmin is:"<<min(no1,no2);//directly print the answer


}

