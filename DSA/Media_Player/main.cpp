#include<iostream>
#include<fstream>
#include "mediaplayer.h"

using namespace std;

int main()
{
    Playlist myPlaylist;
    char choice;
    bool pause = false;

    do {
        cout << CYAN << "==============================================" << RESET << endl;
        cout << WHITE << "               Music Player Menu               " << RESET << endl;
        cout << CYAN << "==============================================" << RESET << endl;
        cout << GREEN << "1. Create Playlist" << RESET << endl;
        cout << GREEN << "2. Add to Playlist" << RESET << endl;
        cout << GREEN << "3. Show Playlist" << RESET << endl;
        cout << BLUE << "4. Play Next Song" << RESET << endl;
        cout << BLUE << "5. Play Previous Song" << RESET << endl;
        cout << BLUE << "6. Play Random Song" << RESET << endl;
        cout << MAGENTA << "7. Display Current Song" << RESET << endl;
        cout << YELLOW << "8. Pause/Resume" << RESET << endl;
        cout << RED << "9. Exit" << RESET << endl;
        cout << CYAN << "==============================================" << RESET << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
            myPlaylist.createPlaylist();
            break;
        case '2':
            myPlaylist.addToPlaylist();
            break;
        case '3':
            myPlaylist.showUserPlaylist();
            break;
        case '4':
            myPlaylist.playNext();
            break;
        case '5':
            myPlaylist.playPrevious();
            break;
        case '6':
            myPlaylist.playRandomSong();
            break;
        case '7':
            myPlaylist.displayCurrentSong();
            break;
        case '8':
            cout << YELLOW << "Pausing/Resuming..." << RESET << endl;
            pause = !pause;
            break;
        case '9':
            cout << RED << "Exiting Music Player..." << RESET << endl;
            break;
        default:
            cout << RED << "Invalid choice. Please enter a valid option." << RESET << endl;
        }

        if (choice != '9')
        {
            cout << "\nPress Enter to continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != '9');

    return 0;
}

