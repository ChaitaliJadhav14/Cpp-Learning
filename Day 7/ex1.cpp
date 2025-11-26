#include <iostream>
#include <iomanip>
using namespace std;
/*
int main() {
    int n; 
	cout<<"\nEnter rows and columns";
	cin>>n;
	for(int i=1;i<=8;i++){
	cout<<endl<<setw(4)<<setfill('x')<<"x"; // how many times "xxxx" appears

    }
    return 0;
}
*/
int main(){
	int rows,column;
		cout<<"\nEnter rows and columns";
		cin>>rows>>column;
		for(int i=1;i<rows;i++){
			cout<<endl<<setw(column)<<setfill('x')<<"";
			
		}
}

