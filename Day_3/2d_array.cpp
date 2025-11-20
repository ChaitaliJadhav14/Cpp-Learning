#include<iostream>
using namespace std;
int main()
{
  int m[5][5],rows,columns,row,column;
  cout<<"Enter number of rows and columns\n";
  cin>>rows>>columns;
  cout<<"\nEnter "<<rows*columns<<" elements\n";
  for(row=0;row<rows;row++)
  {
  	for(column=0;column<columns;column++)
  	{
  		cout<<"\nelement at ["<<row<<"] ["<<column<<"] :";
  		cin>>m[row][column];
	  }
  }
  
   cout<<"\nelements are:\n";
  for(row=0;row<rows;row++)
  {
  	for(column=0;column<columns;column++)
  	{
  		cout<<m[row][column]<<"\t";
	}
	cout<<endl;//nex line
  }
  
}

