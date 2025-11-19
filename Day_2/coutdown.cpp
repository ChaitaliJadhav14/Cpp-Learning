#include<iostream>
using namespace std;
int main(){
	int start,end;
	cout<<"Enter start :";
	cin>>start;
	cout<<"Enter End :";
	cin>>end;
	cout<<"\nNumber in range:";
	if(start<=end){
		for(int i=start;i<=end;i++)
		{
			cout<<i<<" ";
		}
	}
	else{
		for(int j = start;j>=end;j--){
			cout<<j<<" ";
		}
	}
}
