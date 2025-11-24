#include<iostream>
using namespace std;
int main(){
	int choice;
	cout<<"Enter your choice"<<endl;
	cin>>choice;
	switch(choice){
		case 1:
			cout<<"Monday";
			break;
		case 2:
			cout<<"Tues";
			break;
		case 3:
			cout<<"wed";
			break;
		case 4:
			cout<<"Thursday";
			break;
		case 5:
			cout<<"Friday";
			break;
		case 6:
			cout<<"Saturday";
			break;
		case 7:
			cout<<"Sunday";
			break;
		case 0:
			cout<<"EXIT";
			break;
		default:
			cout<<"invalid choice";
			break;		
	}
}