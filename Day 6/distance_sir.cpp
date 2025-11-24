#include<iostream>
using namespace std;
class Distance
{
 private:
 int feet,inches;	
 public:
 	void set_data(int feet,int inches)
 	{
 		this->feet=feet;
 		this->inches=inches;
	 }
	 void display_data()
 	{
 		cout<<"\n"<< feet << " feet " << inches << " inches";
	 }
	 friend bool operator==(Distance d1,Distance d2);
};

bool operator==(Distance d1,Distance d2)
{
	if((d1.feet*12+d1.inches)==(d2.feet*12+d2.inches))
		return true;
	else
		return false;
}

int main() 
{
Distance d1,d2;
d1.set_data(6,3);
d1.display_data();
d2.set_data(2,6);
d2.display_data();
if(d1==d2){
	cout<<"\nBoth equal";
}
else{
	cout<<"\nNot equal";
}
}

