#include <iostream>
using namespace std;
int main(){
	int choice;
	float tea_price=10,coffee_price=20,bun_price=30;
	int tea_qty=0,coff_qty=0,bun_qty=0;
	do{
     cout<<"\nchai wala.com";
     cout<<"\n1.Tea";
     cout<<"\n2.Coffee";
     cout<<"\n3.Bun maska";
     cout<<"\n0.Exit";
     cout<<"\n:";
     cin>>choice;
     switch(choice)
     {
     	case 1:
     		cout<<"\nYou selected Chai";
     		cout<<"\n How much?";
     		cin>>tea_qty;
     		cout<<"\nTotal chai"<<tea_qty*tea_price;
     		break;
     	case 2:
     		cout<<"\nYou selected Coffee";
     		cout<<"\n How much?";
     		cin>>coff_qty;
     		cout<<"\nTotal chai"<<coff_qty*coffee_price;
     		break;
     	case 3:
     		cout<<"\nYou selected bun maska";
     		cout<<"\n How much?";
     		cin>>bun_qty;
     		cout<<"\nTotal chai"<<bun_qty*bun_price;
     		break;
     	case 0:
     		cout<<"Visit Again...";
     		break;
     	default:
     		cout<<"\nwrong option";
     		break;
	 }
	}while(choice!=0);
}
