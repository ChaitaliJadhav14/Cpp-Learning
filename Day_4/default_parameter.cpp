#include<iostream>
using namespace std;
void returns(string name,string state="Maharashtra",string nationality="India"){
	cout<<"\nName:"<<name;
	cout<<"\nState:"<<state;
	cout<<"\nNationality :"<<nationality;
	
}
int main(){
	returns("Chaiatali","USA","Gujrat");
	returns("Chaiatali","Gujrat");
	returns("Chaitali");
	return 0;
	
}
