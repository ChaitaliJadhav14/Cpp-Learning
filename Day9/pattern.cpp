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
				cout<<"X";
			}
		cout<<"\n";//next line
	}	
}
/*
X
XXX
XXXXX
XXXXXXX
*/
