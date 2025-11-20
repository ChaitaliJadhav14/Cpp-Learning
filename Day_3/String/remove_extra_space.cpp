#include<iostream>
using namespace std;
//Remove extra blank spaces in between words. 
//this      is        so     much       fun
//this is so much fun
int main()
{
  string line;
  int i,j;
  cout<<"Enter line:";
  getline(cin,line);

  for(i=0;line[i]!='\0';)
  {
  	if(line[i]==' '&& line[i+1]==' ')
  	{
  		for(int j=i;line[j]!='\0';j++)
  			  {
  				line[j]=line[j+1];
			  }
    }
    else
    	i++;
   
}
  cout<<"\nLine is:"<<line;
}

