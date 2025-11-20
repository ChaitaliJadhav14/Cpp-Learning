#include<iostream>
using namespace std;
int main()
{
  string line;
  int i,count=0,d_count=0,s_count=0,w_count=0,A_count=0,a_count=0;
  cout<<"Enter data:";
  getline(cin,line);
  for(i=0;line[i]!='\0';i++)//accessing by index
  {
  	if(line[i]>='a' && line[i]<='z' )//0 to 9 digits
  		a_count++;
  	else if(line[i]>='A' && line[i]<='Z')
  	    A_count++;
  	else if(line[i]>='0' && line[i]<='9')
  	    d_count++;    
  	else if(line[i]==' ')
  	     w_count++;
  	else
  	    s_count++;	    
   } 
   cout<<"\nTotal lowercase alphabets are in string are:"<<a_count;
   cout<<"\nTotal Capital alphabets are in string are:"<<A_count;
   cout<<"\nTotal digits are in string are:"<<d_count;
   cout<<"\nTotal words are in string are:"<<w_count;
   cout<<"\nTotal Symbols are in string are:"<<s_count;
}


