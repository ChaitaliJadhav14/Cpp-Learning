#include<iostream>
using namespace std;
//can vote?
/*nesting of functions is where one functions internally calls another function
write a function can vote(int age)which will return true if ..book
*/
bool can_vote(int age){
	if(age>=18)
		return true;
	else
		return false;
	
}
void person(string name,string gender,int age){
	cout<<"\nName "<<name;
	cout<<"\nGender "<<gender;
	cout<<"\nage "<<age;
	if (can_vote(age))
		cout<<"\nCAN vote";
	else 
		cout<<"\ncan not vot";
	
}
int main(){
	person("Chaitali","Female",23);
	return 0;
	
}
