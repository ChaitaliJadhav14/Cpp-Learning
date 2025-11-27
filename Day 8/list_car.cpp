#include <iostream>
#include <list>
#include <string>

using namespace std;

class Playlist {
private:
    list<string> songs;
    
public:
	Playlist() {
        songs = {"Song A", "Song B", "Song C", "Song D", "Song E"};
    }
    void print()  {
        cout << "[ ";
        for (string song : songs) {
            cout << "\"" << song << "\" ";
        }
        cout << "]" << endl;
    }

    void display_playlist() {
        cout << "Current Playlist: ";
        print();
    }

    void rotate_anti_clockwise(int n) {
        if (songs.empty()==false)//not empty
        {
         int rotations = n % songs.size();
         for (int i = 0; i < rotations; ++i) 
		 {
            songs.push_back(songs.front());
            songs.pop_front();
            cout << "\nPlaylist after " << rotations << " anti-clockwise rotation(s):" << endl;
            print();
          }
         
    } 
}

    void rotate_clockwise(int n) {
        if (songs.empty()==false)
        {
        
        int rotations = n % songs.size();
        for (int i = 0; i < rotations; ++i) {
            songs.push_front(songs.back());
            songs.pop_back();
        cout << "\nPlaylist after " << rotations << " clockwise rotation(s):" << endl;
        print();
        }
        
    }
}
};

int main() {
    Playlist my_playlist;
    string direction;
    int rotations;

    cout << "Welcome to the Circular Playlist App!" << endl;
    my_playlist.display_playlist();

    while (true) 
	{
        cout << "\n-----------------------------------------------------" << endl;
        cout << "Enter rotation direction (anti-clockwise or clockwise) or 'exit' to quit: ";
        getline(cin, direction);

        if (direction == "exit") {
            cout << "\nExiting app. Goodbye!" << endl;
            break;
        }

        cout << "Enter number of rotations: ";
        cin >> rotations;
        cin.ignore();

        if (direction == "anti-clockwise") {
            my_playlist.rotate_anti_clockwise(rotations);
        } 
		else if (direction == "clockwise") {
            my_playlist.rotate_clockwise(rotations);
        } 
		else {
            cout << "\nInvalid direction. Please enter 'anti-clockwise' or 'clockwise'." << endl;
        }
    }

    return 0;
}







