#include<iostream>
using namespace std;
int main()
{
  string word;
  int i,v_count=0,c_count=0;
  cout<<"Enter word:";
  getline(cin,word);
  for(i=0;word[i]!='\0';i++)//accessing by index
  {
  	if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z'))
  	{
  		char c=word[i];
  		if(c=='a' || c=='e'|| c=='i' || c=='o' || c=='u'|| c=='A' || c=='E'|| c=='I' || c=='O' || c=='U')
  		    v_count++;
  		else 
  		    c_count++;
	  }
  	}
  cout<<"\nNumber of Vowels are "<<v_count;
  cout<<"\nNumber of consonants are "<<c_count;
}

//
//

