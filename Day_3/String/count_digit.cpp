#include<iostream>
using namespace std;
int main()
{
  string line;
  int i,count=0;
  cout<<"Enter data:";
  getline(cin,line);
  for(i=0;line[i]!='\0';i++)//accessing by index
  {
  	if(line[i]>='0' && line[i]<='9' )//0 to 9 digits
  		count++;
   } 
  
  cout<<"\nTotal digits in string are:"<<count;
}

