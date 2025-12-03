#include<iostream>
//PATTERSN
using namespace std;
int main()
{
	int i,j;

	for(i=5;i>=1;i--)//controller
	{
		for(j=1;j<=i;j++)//printer
			{
				cout<<"X";
			}
		cout<<"\n";//next line
	}	
}
/*
XXXXX
XXXX
XXX
XX
X
*/
