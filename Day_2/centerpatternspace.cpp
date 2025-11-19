#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
	int i,j,space,s;
	int n;
	cout<<"Enter number";
	cin>>n;

	for(space=n,i=1;space>=1 && i<=n;space--,i++)//controller
	{
		//put spaces on a line
		for(s=1;s<=space;s++)	
			cout<<" ";//space
		//X print
		for(j=1;j<=i;j++)//printer
			cout<<i<<" ";	//space
		//next line
		cout<<"\n";
	}
		
}
/*
      X
     X X
    X X X
   X X X X
  X X X X X
*/

