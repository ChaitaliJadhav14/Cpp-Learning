#include<iostream>
//PATTERSN
using namespace std;
int main()
{
	char i,j;

	for(i='a';i<='e';i++)//controller
	{
		for(j='a';j<=i;j++)//printer
			{
				cout<<i;//j
			}
		cout<<"\n";//next line
	}	
}

/*
a
bb
ccc
dddd
eeeee
*/
