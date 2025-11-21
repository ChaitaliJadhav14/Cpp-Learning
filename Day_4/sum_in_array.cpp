#include<iostream>
using namespace std;
void sum(int a[],int n,int sum)
	{
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if((a[i]+a[j])==sum){
					cout<<"\n("<<a[i]<<","<<a[j]<<")";
					
				}
			}		
    }
}
int main() 
{
	int a[]={1,2,3,4};
	cout<<"\nsubset:";
	sum(a,4,5);

}
