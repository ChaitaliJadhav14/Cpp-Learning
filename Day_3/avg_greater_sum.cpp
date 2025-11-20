#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int sum=0;
  float avg;
  
  for(index=0;index<size;index++)
  {
  	sum+=a[index];
  } 
  avg=(float)sum/size;//dynamic type casting
  cout<<"\nAverage:"<<avg;
  cout<<"\nLesser than average\n";
  for(index=0;index<size;index++)
  {
  	if(a[index]<avg)
  	    cout<<a[index]<<",";
  } 
  cout<<"\nGreater than average\n";
  for(index=0;index<size;index++)
  {
  	if(a[index]>avg)
  	    cout<<a[index]<<",";
  } 
  
}
