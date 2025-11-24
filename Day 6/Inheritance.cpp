#include<iostream>
using namespace std;
class Human
{
	private:
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
	private:
			string degree;
	public:
		void set_education(string degree)
		{
			this->degree=degree;
		}
			void display_education()
		{
		 cout<<"\ndisplay of education degree is:"<<degree;
		}
};

int main() 
{
Education object;
object.set_human("amar","male");
object.set_education("Phd");
object.display_human();
object.display_education();
}




