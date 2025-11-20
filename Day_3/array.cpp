#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements are";
  for(index=0;index<size;index++)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }  
}

