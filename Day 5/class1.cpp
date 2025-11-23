#include<iostream>
using namespace std;
class Human
{
  private:
	string name,gender;
  public:
	//setter
	void set_Human(string n,string g)
		{
			name=n;
			gender=g;
		}
	//getter
	void display_Human()
		{
			cout<<"Name is:"<<name<<" I am a "<<gender;
		}
};
	
int main() 
{
	Human h;//Created object H of type human. 
	h.set_Human("amar","male");
	h.display_Human();

	
}

