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
				cout<<i%2;
			}
		cout<<"\n";//next line
	}	
}
/*
1
00
111
0000
11111
*/