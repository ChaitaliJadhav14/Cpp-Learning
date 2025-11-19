#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
	int i,j,space,s;

	for(space=4,i=1;space>=1 && i<=8;space--,i+=2)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<"X";	//space
		//next line
		cout<<"\n";
	}
		
}

/*
    X
   XXX
  XXXXX
 XXXXXXX
 */
