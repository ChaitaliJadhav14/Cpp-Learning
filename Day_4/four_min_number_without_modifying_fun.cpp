#include<iostream>
using namespace std;
//Without modifying the function, 
//rewrite the code(main) to print the minimum of four numbers.
int min(int a,int b)
{
	if(a<b)
		return a;
	else	
		return b;
}
int main()
{
    int a, b, c, d;
    cout << "Enter 4 numbers:\n";
    cin >> a >> b >> c >> d;

    // Find minimum of four numbers using the given min function
  //  int min_is = min(min(a, b), min(c, d));

  //  cout << "\nMinimum is: " << min_is;
    
    //or
cout<<"\nmin is:"<<min(min(a,b),min(c, d));//directly print the answer

    return 0;
}

