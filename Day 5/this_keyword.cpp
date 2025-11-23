#include<iostream>
using namespace std;
/*
create call cm and inches
inches has unit data member in inches
cm has unit data mebmber in cm
use frined add(Inches i, CM c)---print total in inches and in cm both in 2 line
*/
class Inches;//forward declaration which tells compiler that is another class
class CM
{
	private:
		float unit;
	public:
		CM(float unit)
		{
			this->unit=unit;
			//this pointer points to instance member this-> pointercan access datamember via arrow operator
		}
		friend void add(Inches i,CM c);
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
		friend void add(Inches i,CM c);
};

void add(Inches i,CM c)
{
	cout<<"\nAdding both in Inches:"<<i.unit+c.unit/2.5;
	cout<<"\nAdding both in CMs:"<<i.unit*2.5+c.unit;
}
int main() 
{
	Inches i(6.3f);
	CM  c(12.5f);
	add(i,c);


	
}

