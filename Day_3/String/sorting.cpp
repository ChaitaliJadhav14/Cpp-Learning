#include<iostream>
//find min/max
using namespace std;
int main()
{
   int size=0;
   int a[10];
   cout<<"Enter the size of array: ";
   cin>>size;
   cout<<"Enter the elemnet: ";
   for(int i=0;i<size;i++){
 
   	cin>>a[i];
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
  cout<<"\nsecond largest elements is ";
  
  cout<<a[size-2]<<"."; 
}
