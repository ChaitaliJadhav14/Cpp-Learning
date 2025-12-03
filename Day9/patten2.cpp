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
				cout<<"X";
			}
		cout<<"\n";//next line
	}	
}
/*
X
XX
XXX
XXXX
XXXXX
*/

