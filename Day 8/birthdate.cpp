#include <iostream>
#include<vector>

 using namespace std;
 
 int sum_it(int no)
 {
  int sum=0;
  while(no>0)
  {
  	int digit=no%10;
  	no=no/10;
  	sum+=digit;
  }
  return sum;
 }
 
 int with_in_9(int number)
 {
 	while(number>9)
 		number=sum_it(number);
 	return number;
 }
 
 string i_am(int numrology_number)
 {
 	vector<string> v={" ","The Leader","The Peacemaker","The Communicator","The Builder","The Adventurer","The Caregiver"
                       ,"The Seeker","The Powerhouse","The Humanitarian"};
    return v[numrology_number];
}
 
 int main() 
 {
  string dob,name;
  cout<<"Enter Your name:";
  cin>>name;
  cout<<"Enter dob in dd-mm-yyyy:";
  cin>>dob;
  int sum=0;
  for(char c:dob)
   {
   	if (c!='-')
	  	sum+=c-'0';
   }
  int numrology_number= with_in_9(sum);
  cout<<"\n"<<name<<" your numrology number is: "<<numrology_number<<" Type:"<<i_am( numrology_number);
 return 0;
 }
