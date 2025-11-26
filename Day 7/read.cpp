#include <fstream>
 #include <iostream>
 //Ask user who is he/she?
 //Create a file with username.txt 
 //First time you will create a file, 
 //if second time you will simply append data in the file. 
 //Keep reading data from user till user types QUIT 
 
 using namespace std;
 int main() {
 	string username;
 	cout<<"who is this:";
 	cin>>username;
 // Create and open a text file
 ofstream MyFile(username+".txt",ios::app);//in CWD
 // Write to the file
 while(true){
 string data;
 cout<<"Enter data";
 getline(cin,data)
 if(data=="QUIT"){
 	break;
 }
MyFile<<endl<<data;
cout<<"saved file";
 }
 
 MyFile.close();
}

