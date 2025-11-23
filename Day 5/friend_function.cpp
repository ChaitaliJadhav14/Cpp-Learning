#include<iostream>
using namespace std;
/*
friend function:
Friend function is not a member function.
Still has all the rights of a member function.
A friend function is an outsider which can still access private data. 
friend function either uses reference or direct object for access. 
One must pass an object to a friend using the '.' operator to access private data. 
User's friend keyword during declaration.
It is a prototype within a class, but declared and defined outside.
Will be called directly without any object.  
*/

class Human
{
  private:
	string name,gender;
  public:
	//setter
	Human()//default constructor
	{
		cout<<"\nobject created...";
		name="None";
		gender="unknown";
	}
	void set_Human(string n,string g)
		{
			name=n;
			gender=g;
		}
	//getter
	void display_Human()
		{
			cout<<"\nMember Name is:"<<name<<" I am a "<<gender;
		}
	friend void access(Human &h);
};
	
   void access(Human &h)
		{
			cout<<"\nFriend here accessing private data:Name is:"<<h.name<<"  gender is:"<<h.gender;
			h.name="AMAR";
		}
int main() 
{
	Human h;//Created object H of type human. 
	h.set_Human("amar","male");
	h.display_Human();
	access(h);
	h.display_Human();

	
}


