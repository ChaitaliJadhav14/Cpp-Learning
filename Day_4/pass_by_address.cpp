#include<iostream>
using namespace std;
//paas by address//call by address :In this, data is not passed but address is
//changes are done and seen globally
void swap(int *no1,int *no2)
{
	int temp;
	cout<<"\n	start: in function no1:"<<*no1<<" @"<<no1<<" no2:"<<*no2<<" @"<<no2;
	temp=*no1;
	*no1=*no2;
	*no2=temp;
	cout<<"\n	end: in function no1:"<<*no1<<" no2:"<<*no2;
}
int main()
{
int no1=100,no2=200;
cout<<"\nstart: in main no1:"<<no1<<" @"<<&no1<<" no2:"<<no2<<" @"<<&no2;
swap(&no1,&no2);
cout<<"\nend: in main no1:"<<no1<<" no2:"<<no2;
}


