#include<iostream>
using namespace std;
class Human
{
	protected:
		string name,gender;
	public:
		void set_human(string name,string gender)
		{
			this->name=name;
			this->gender=gender;
			cout<<"\nset of human";
		}
		void display_human()
		{
		 cout<<"\ndisplay of human Name:"<<name<<" gender:"<<gender;
		}
};
class Education:public Human
{
	protected:
			string degree;
	public:
		void set_education(string name,string gender,string degree)
		{
			this->name=name;
			this->gender=gender;
			this->degree=degree;
			
		}
			void display_education()
		{
		 cout<<"\nName:"<<name<<" gender:"<<gender<<" degree is:"<<degree;
		}
};

int main() 
{
Education object;
//object.set_human("amar","male");
object.set_education("amar","male","Phd");
//object.display_human();
object.display_education();

}
//fist sir
	parent p;
	p.language();
	p.eat();
	child c;
	c.eat();
	c.language();

//sir give last
	child c;
	c.eat();
	c.language();
