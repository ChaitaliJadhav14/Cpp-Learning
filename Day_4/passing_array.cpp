//ask to rita
#include<iostream>
using namespace std;
void doubler(int a[],int size)
	{
		for(int i=0;i<size;i++)
			a[i]=a[i]*2;
    }
void printer(int a[],int size) 
{
	cout<<"\nArray has:";
	for(int i=0;i<size;i++)
		cout<<a[i]<<",";
}
int main() 
{
	int a[]={1,2,3,4,5,6},size=6;
	cout<<"\nStart:";
	printer(a,size);
	doubler(a,size);
	cout<<"\nend:";
	printer(a,size);
}

