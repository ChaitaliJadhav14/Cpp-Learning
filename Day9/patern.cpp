#include<iostream>
//PATTERSN
using namespace std;
int main()
{
	int i,j;

	for(i=1;i<=5;i++)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<j%2;
			}
		cout<<"\n";//next line
	}	
}
/*
1
10
101
1010
10101
*/
