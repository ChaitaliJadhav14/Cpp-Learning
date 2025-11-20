#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int key,position=-1;//if -1 not found
  cout<<"Enter element to search:";
  cin>>key;
  for(index=0;index<size;index++)
  {
  	if(a[index]==key){
	    position=index;
	     break;
  		}
  	
  }  
 if(position==-1)
 cout<<"not found";
 else
 cout<<key<<" object foumd at:  "<<position;
 
}

