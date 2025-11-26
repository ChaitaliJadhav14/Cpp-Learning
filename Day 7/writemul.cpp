 #include <iostream>
 #include <fstream>
 //Ask user who is he/she?
 //Create a file with username.txt 
 //First time you will create a file, 
 //if second time you will simply append data in the file. 
 //Keep reading data from user till user types QUIT 
 
 using namespace std;
 int main() {
 // Create and open a text file
 ofstream MyFile("new_amar.txt",ios::app);//in CWD
 // Write to the file
 string data;
 cout<<"Ener data to write:";
 getline(cin,data);
 MyFile << endl<<data;//or MyFile <<data<<endl;
 // Close the file
 
 MyFile.close();
}

