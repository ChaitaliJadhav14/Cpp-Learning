#include<iostream>
/*constructor/destructor

Constructor will assign memory ,
initialized data to default value or 
initialized data to user-given value,
creates copy of preexisting object

it is a function with the class name itself
No return type, not even void.

generally public
*/

using namespace std;
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
	Human(string n,string g)//parameterized constructor
		{
			name=n;
			gender=g;
			cout<<"\n given data set..";
		}
	Human(Human &ref)//copy constructor:creates deep copy
		{
			name=ref.name;
			gender=ref.gender;
			cout<<"\n given data set from ref";
		}	
	//getter
	void display_Human()
		{
			cout<<"\nName is:"<<name<<" I am a "<<gender;
		}
};
	
int main() 
{
	Human h;//Created object H and default constructor called
	h.display_Human();
	Human h2("amar","male");//h2 parameterize constructor
	h2.display_Human();	
	Human h3(h2);//call copy constructor
	h3.display_Human(); 
}


