#include<iostream>
using namespace std;
class Student
{
  private:
	string name,gender;
	int rollno;
	static int roll_no_generator;
  public:

	Student(string n,string g)
		{
			name=n;
			gender=g;
			rollno=++roll_no_generator;
			cout<<"\n"<<name<<" remeber your roll number is:"<<rollno;
		}
	
	//getter
	void display_student()
		{
			cout<<"\nRollno:"<<rollno<<" Name is:"<<name<<" gender:"<<gender;
		}
	static void display_total_rolls()
	{
		cout<<"\n roll no generated till now:"<<Student::roll_no_generator;
	}

};
//for static members it is must to show it outside class
int Student::roll_no_generator=2500;//init to some number
	
int main() 
{
 Student s("amar","male");
 Student s2("amarita","female");
 Student s3("amaara","female");
Student::display_total_rolls();
 
}



