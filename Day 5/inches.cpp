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

A function can access multiple classes.  
*/
class Inches;//forward declaration which tells compiler that is another class
class Centimeter
{
	private:
		float unit;
	public:
		Centimeter(float u)
		{
			unit=u;
		}
		friend void AB(Inches i,Centimeter c);
};
class Inches
{
	private:
		float unit;
		public:
		Inches(float u)
		{
			unit=u;
		}
		friend void AB(Inches i,Centimeter c);
};

void AB(Inches i,Centimeter c)
{
	cout<<"\nadding both in inches:"<<i.unit+c.unit/2.5;
	cout<<"\nadding both in centimeter:"<<i.unit*2.5+c.unit;
}
int main() 
{
	Inches i(6.3f);
	Centimeter c(12.5f);
	AB(i,c);
	
}


