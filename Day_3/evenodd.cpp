#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int e_count=0,o_count=0;
  for(index=0;index<size;index++)
  {
  	if(a[index]%2==0){
	    e_count++;
  		}
  	else {
  	   o_count++;
    }
  } 
  cout<<"\nEven are "<<e_count; 
  cout<<"\nOdd are "<<o_count; 
 
}

