#include <iostream>
using namespace std;
template <typename T>
T add(T a,T b)
{
	return a+b;

}
int main(){
	cout<<"Sum of integers: "<<add<int>(5,5)<<endl;
	cout<<"Sum of floats: "<<add<float>(5.6,5.9)<<endl;
	cout<<"Sum of charachter: "<<add<char>('c','h')<<endl;
	cout<<"Sum of strings: "<<add<string>("cha","ita")<<endl;
}
