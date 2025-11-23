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
class B;//forward declaration which tells compiler that is another class
class A
{
	private:
		int data_A;
	public:
		A()
		{
			data_A=100;
		}
		friend void AB(A obja,B objb);
};
class B
{
	private:
		int data_B;
		public:
		B()
		{
			data_B=200;
		}
		friend void AB(A obja,B objb);
};

void AB(A obja,B objb)
{
	cout<<"\nFrom A we have dataA:"<<obja.data_A;
	cout<<"\nFrom B we have dataB:"<<objb.data_B;
}
int main() 
{
	A obj_a;
	B obj_b;
	AB(obj_a,obj_b);

	
}


