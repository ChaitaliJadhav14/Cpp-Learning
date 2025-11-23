#include<iostream>
using namespace std;
class Circle
{
  public: //by default it is private
	float radius; //instance member: available wity every object
  public:
	//setter
	//void set_r(float r)//local member
	//	{
	//		radius=r;//local member setting instance member
	//	}
	//getter
	void display_area_circle(float radius)
		{
			cout<<"Area of cicle is:"<<3.14*radius*radius;
		}
};
	
int main() 
{
	Circle c;//Created object H of type human. 
	float radius1;
	cout<<"Enter radius:";
	cin>>radius1;//local data member(pass by value)not any relation with function
//	c.set_r(radius1);
	c.display_area_circle(c.radius);
//	c.display_area_circle(c.radius1);
	

}

