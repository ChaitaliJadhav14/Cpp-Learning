#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int min,max;
  min=max=a[0];//local ref
  for(index=0;index<size;index++)
  {
  	if(a[index]<min)
  		min=a[index];//update min
  	else if(a[index]>max)
  		max=a[index];//update max
  }  

  cout<<"\nEntered "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }  
  cout<<"\nMin:"<<min<<"\tMax:"<<max;
}
