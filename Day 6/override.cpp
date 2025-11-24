#include <iostream>
using namespace std;
class parent{
	public:
		void language(){
			cout<<"Parent:Mother language";
		}
		void eat(){
			cout<<"Parent:Bhaji poli";	
		}		
};
class child:public parent{
	public:
		void eat(){
			cout<<"child:Vada paw";
		}
};
int main(){
	parent p;
	p.language();
	p.eat();
	child c;
	c.eat();
}
