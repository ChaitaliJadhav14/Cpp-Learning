#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
	int i,j,space,s;
	char ic,jc;


	for(space=5,i=1,ic='A';space<=1 && i<=5,ic<='E';space--,i++,ic++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<j;	//space
		//next line
		for(jc='A';jc<=ic;jc++)
		    cout<<j;
		cout<<"\n";
	}
		
}
/*
     12
    1233
   123444
  12345555
 1234566666
 */
