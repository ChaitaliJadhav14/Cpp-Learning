
#include<iostream>
//tea stall v1
//set values tea 10INR coffee 40INR  bunmaska 100INR
//when one choses anything ask for quantity
//ask do you want to end order(y) or no(n) order more
//keep adding data 
//when user says end order
//bill generated
/*
==============================
"chai wala .com
==============================
ITEM      COST    QTY    TOTAL
Tea       10      2      20
BunMaska  100     1      100
==============================
Total cost to pay        120 
*/
using namespace std;
int main()
{
	int choice;
	float tea=10.00f,coffee=40.00f,bm=100.00f;//cost
	int tea_qty=0,coffee_qty=0,bm_qty=0,qty;//quantity
	do
	{
		//menu
		cout<<"\n==============";
		cout<<"\nchai wala .com";
		cout<<"\n==============";
		cout<<"\n1.Tea";
		cout<<"\n2.Coffe";
		cout<<"\n3.Bun Maska";
		cout<<"\n0.Exit";
		cout<<"\n==============";
		cout<<"\n:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"\nyou selected Tea";
				cout<<"\nHow many?";
				cin>>qty;
				tea_qty=tea_qty+qty;
				cout<<"\nTotal amount to pay is:"<<tea_qty*tea;
				break;
			case 2:
				cout<<"\nyou selected Coffee";
				cout<<"\nHow many?";
				cin>>qty;
				coffee_qty=coffee_qty+qty;
				cout<<"\nTotal amount to pay is:"<<coffee_qty*coffee;
				break;
			case 3:
				cout<<"\nyou selected Bun-maska";
				cout<<"\nHow many?";
				cin>>qty;
				bm_qty=bm_qty+qty;
				cout<<"\nTotal amount to pay is:"<<bm_qty*bm;
				break;
			case 0:
				cout<<"\nVisit again soon.....";
				break;
			default:
				cout<<"\nwrong option selected.";
				break;
				
		}
		cout<<"\nWant to order more items 1(yes)/0(no)\n";
		cin>>choice;
		if(choice==1)
			continue;
		else if(choice==0)
			{
			//billing info
				cout<<"\n==========================";
				cout<<"\n       chai wala .com";
				cout<<"\n==========================";
				cout<<"\nITEM    COST   QYT   TOTAL";
		        if(tea_qty>0)
					cout<<"\nTea        "<<tea<<"   "<<tea_qty<<"   "<<(tea*tea_qty);
				if(coffee_qty>0)
					cout<<"\nCoffee     "<<coffee<<"   "<<coffee_qty<<"   "<<(coffee*coffee_qty);
				if(bm_qty>0)
					cout<<"\nBun_M      "<<bm<<"   "<<bm_qty<<"   "<<(bm*bm_qty);
				cout<<"\n==========================";
				cout<<"\nTotal Amount:           "<<(tea*tea_qty)+(coffee*coffee_qty)+(bm*bm_qty);				
			}
	}while(choice!=0);//User does not exit 
}

//Menu3.cpp
//Displaying Menu3.cpp.
