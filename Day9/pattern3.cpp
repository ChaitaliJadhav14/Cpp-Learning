#include<iostream>
//PATTERSN
using namespace std;
int main()
{
	int i,j;

	for(i=1;i<=7;i=i+2)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
					cout<<j;//cout<<i;//cout<<"X";
			}
		cout<<"\n";//next line
	}	
}
/*
1
123
12345
1234567
*/
