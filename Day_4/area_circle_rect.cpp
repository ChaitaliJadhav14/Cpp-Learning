#include<iostream>
using namespace std;
float area_of_circle(float r){
	return 3.14*r*r;
	
}
float area_of_rectagle(float l,float b){
	return l*b;
}
int main(){
	float r,l,b;
	cout<<"Enter Radius of circle:";
	cin>>r;
	cout<<"Area of circle"<<area_of_circle(r);
	cout<<"Enter length and breadth of rectangle : ";
	cin>>l>>b;
	cout<<"Area of Rectangle: "<<area_of_rectagle(l,b);
	return 0;
	
}
