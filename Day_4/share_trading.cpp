#include<iostream>
using namespace std;
int buy_sell(int a[],int size)
	{   
	     int profit=0,buy_day=0,sell_day=0;
		for(int i=0;i<size;i++){
			for(int j=i+1;j<size;j++){
				if(a[j]-a[i]>profit){
					profit=a[j]-a[i];
					buy_day=i;
					sell_day=j;
					
				}
			}			
    }
    cout<<"\n buy on day "<<buy_day<<"\nsell on"<<sell_day;
    return profit;
}

int main() 
{
	int a[]={7,2,0,6,12,3,6},size=7;
	cout<<"\nMax profit:"<<buy_sell(a,size);
}


