#include<iostream>
//find min/max
using namespace std;
int main()
{
   int size=0;
   int a[10];
   cout<<"Enter the size of array: ";
   cin>>size;
   
   for(int i=0;i<size;i++){
   	cout<<"Enter the elemnet";
   	cin>>a[i];
   }
    cout<<"\nBefore Sorted "<<size<<" elements are:";
    for(int i=0;i<size;i++)
    {
  	cout<<a[i]<<",";
     } 
  
for(int i=size-1;i>0;i--)//passes
{ 
  for(int j=0;j<i;j++)//sort
	{
		if(a[j]>a[j+1])//comapre
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
  cout<<"\nAfter Sorted "<<size<<" elements are:";
  for(int i=0;i<size;i++)
  {
  	cout<<a[i]<<",";
  } 
  cout<<"\nsecond largest elements are:";
  
  cout<<a[size-2]<<","; 
}
