 #include <iostream>
 #include <fstream>
 //Ask user who is he/she?
 //Create a file with username.txt 
 //First time you will create a file, 
 //if second time you will simply append data in the file. 
 //Keep reading data from user till user types QUIT 
 
 using namespace std;
 int main() {
 	string user_name;
 	cout<<"Who is this:";
 	cin>>user_name;
 // Create and open a text file
 //ofstream MyFile(user_name+".txt",ios::app);//in CWD  update compiler...
 // Write to the file
 while(true)
 {
   string data;
   cout<<"\nEnter data to write:";
   getline(cin,data);
   cin.ignore(true);
 
   if(data=="QUIT")
   	break;
   MyFile << endl<<data;//or MyFile <<data<<endl;
   cout<<"\nSaved to file";
 }

 // Close the file 
 MyFile.close();
}


