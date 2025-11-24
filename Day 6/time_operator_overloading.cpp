#include<iostream>
using namespace std;

class Time
{
 private:
 int h,m,s;	
 public:
 	void set_data(int h,int m,int s)
 	{
 		this->h=h;
 		this->m=m;
 		this->s=s;
	 }
	 void display_data()
 	{
 		cout<<"\n"<<h<<" : "<<m<<" : "<<s;
	}
	 friend Time operator+(Time n1,Time n2);
	 
	 
};

Time operator+(Time t1,Time t2)
	 {
	 	Time temp;
	 	temp.h=t1.h+t2.h;
	 	temp.m=t1.m+t2.m;
	 	temp.s=t1.s+t2.s;
	 	temp.m+=temp.s/60;
	 	temp.s=temp.s%60;
	 	temp.h+=temp.m/60;
	 	temp.m=temp.m%60;
	 	return temp;
	 }


int main() 
{
Time t1,t2,t3;
t1.set_data(3,43,52);
t2.set_data(2,54,55);
cout<<"\nTime 1:";
t1.display_data();
cout<<"\nTime 2:";
t2.display_data();
t3=t1+t2;
cout<<"\nTime 3 addition of 2 times:";
t3.display_data();
}


