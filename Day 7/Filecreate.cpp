 #include <iostream>
 #include <fstream>
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



