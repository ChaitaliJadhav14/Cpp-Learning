#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	cout<< "X";
	for(int i=1;i<=4;i++){
		cout<<endl<<"X"<<setw(i)<<"X";
		}
	cout<<endl<<setw(6)<<setfill('X')<<""<<setfill(' ');
	return 0;
}
