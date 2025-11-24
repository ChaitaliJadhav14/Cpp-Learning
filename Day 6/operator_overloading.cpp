#include<iostream>
using namespace std;

/*
It is a way of recoding conventional operators(+- * /) for user-defined data types(struct,class,enum)

1.use friend function 
2.use member function

syntax operator(symbol)
var3=var1+var2//Operation on two causes a return of the exact type. 
var1=var1+var2//Operation on two gets stored in the first pass data. 
*/
class Complex
{
 private:
 int real,imaginary;	
 public:
 	void set_data(int real,int imaginary)
 	{
 		this->real=real;
 		this->imaginary=imaginary;
	 }
	 void display_data()
 	{
 		cout<<"\n"<<real<<" + "<<imaginary<<"i";
	 }
	 friend Complex operator+(Complex n1,Complex n2);
	 friend void operator-(Complex &n1,Complex &n2);
};

Complex operator+(Complex n1,Complex n2)
	 {
	 	Complex temp;
	 	temp.real=n1.real+n2.real;
	 	temp.imaginary=n1.imaginary+n2.imaginary;
	 	return temp;
	 }
void operator-(Complex &n1,Complex &n2)
	 {
	
	 	n1.real-=n2.real;//n1.real=n1.real-n2.real
	 	n1.imaginary-=n2.imaginary;
	 }

int main() 
{
Complex n1,n2,n3;
n1.set_data(10,5);
n1.display_data();
n2.set_data(2,6);
n2.display_data();
n3=n1+n2;//  operator+(n1,n2);

cout<<"\n------------";
n3.display_data();	
n1-n2;
n1.display_data();
}

