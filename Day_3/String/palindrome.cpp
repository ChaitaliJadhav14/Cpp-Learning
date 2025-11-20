
#include<iostream>
using namespace std;
//Without using any special method, 
//check whether the given word is a palindrome or not. 
int main()
{
  string word;
  int i,j;
  bool flag=true;
  cout<<"Enter word:";
  cin>>word;
  for(j=0;word[j]!='\0';j++);//to get end
  
  j=j-1;//from \0 to last
  for(i=0;i<j;i++,j--)
  {
  	if(word[i]!=word[j])
  	{
  		flag=false;
  		break;
	  }
   } 
  cout<<word<<" is palindrome:"<<(flag?"yes":"no");
}

