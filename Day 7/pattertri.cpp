/*#include <iostream>
#include<iomanip>
using namespace std;
int main(){
	//cout<<setw(7)<<" "<<setfill('X')<<""<<setfill(' ');
	cout<<setw(6)<<setfill"X";
	for(int l=1,r=1;l>=2 && r<=5;l--,r++)
	cout<<endl<<setw(l))<<"x"<<set(6)<<"x";
	cout<<setw(7)<<" "<<setfill('X')<<""<<setfill(' ');
	

	return 0;
}
*/
#include <iostream>
 #include <iomanip>
 using namespace std;
 int main() {
 cout <<setw(7)<<"X";
 for(int l=6;l>=2;l--)//5 times
 	cout<<endl<<setw(l)<<"X"<<setw(7-l)<<"X";
 	
 /*for(int l=6,r=1;l>=2 && r<=5;l--,r++)//5 times
 	cout<<endl<<setw(l)<<"X"<<setw(r)<<"X";*/
 cout <<endl<<setw(7) << setfill('X')<<""<<setfill(' ');
 
 return 0;
 }

