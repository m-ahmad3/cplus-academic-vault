#include<iostream>
#include<fstream>

using namespace std;

// Global Variables
const int col = 15; // Number of columns in the board
const int row = 15; // Number of rows in the board
int level = 1; // Default game level
char board[row][col]; // 2-D Array for board

// Prototypes of Functions
void read_board(ifstream& file_f);
void print_board();
void print_score(int score_f, int lives_f);
void update_highrecord(char name[], int score);
bool dictionary_check(char word[], int size);
bool easy(char word[], int size);
bool intermediate(char word[], int size);
bool difficult(char word[], int size);
void pause_game(char name[], int score_f, int lives_f);
void input_word(char name_f[], int& score, int max, int& lives);
void level_select();
bool resume_menu();
void resume();
void new_game();
void print_highrecord();

int main() {
	cout << "\t\t||-----WORD PUZZLE-----||" << endl;
	
			// Main Menu loop of Program
			char input = '\0';
			// Loop will repeat until user enter 'e' or 'E'
			while (input != 'e' && input != 'E') {
				cout << "\n-------------------------------" << endl;
				cout << "|\t*** MAIN MENU ***     |" << endl;
				cout << "-------------------------------" << endl;
				cout << "*Press 'N' for New Game" << endl;
				cout << "*Press 'R' for Resume Game" << endl;
				cout << "*Press 'L' for Level Selection" << endl;
				cout << "*Press 'H' for High Scores" << endl;
				cout << "*Press 'E' for Exit" << endl;
				cout << "-------------------------------" << endl;
				cout << "Enter Your Choice: ";
				cin >> input;

				if (input == 'n' || input == 'N') {
					new_game();
				}
				else if (input == 'r' || input == 'R') {
					resume();
				}
				else if (input == 'l' || input == 'L') {
					level_select();
				}
				else if (input == 'h' || input == 'H') {
					print_highrecord();
				}
			}
		
	return 0;
}

// Function to read the board file and initialize the main board array
void read_board(ifstream& file_f) {
	for (int a = 0; a < row; a++) {
		for (int b = 0; b < col; b++) {
			file_f >> board[a][b];
		}
	}
}

// Function to print board on console
void print_board() {
	for (int a = 0; a < row; a++) {
		for (int b = 0; b < col; b++) {
			cout << board[a][b] << " ";
		}
		cout << endl;
	}
}

// Function to print score
void print_score(int score_f, int lives_f) {
	cout << "--------------------------" << endl;
	cout << "Score: " << score_f << "\tLives : " << lives_f << endl;
	cout << "--------------------------" << endl;
}

// Function to update the highrecords and arrange them in Ascending Order
void update_highrecord(char name[], int score) {
	ifstream file("highrecord.txt");
	if (!file.is_open()) {
		ofstream file2("highrecord.txt");
		file2 << name << " " << score;
		file2.close();
	}
	else {

		// Using Dynamic 2-D Array for reading name from file
		char** read_name = new char* [5];
		for (int a = 0; a < 5; a++) {
			read_name[a] = new char[15];
		}
		int read_score[5];
		int loop;
		for (loop = 0; loop < 5 && !file.eof(); loop++) {
			file >> read_name[loop];
			file >> read_score[loop];
		}
		// If there are 5 records in file, than the last one will be changed
		if (loop == 5) {
			if (score > read_score[4]) {
				read_score[4] = score;
				int a;
				for (a = 0; name[a] != '\0'; a++) {
					read_name[4][a] = name[a];
				}
				read_name[4][a] = '\0';
			}
		}
		// If there are less than 5 records than the next index will be initialized
		else {
			read_score[loop] = score;
			int a;
			for (a = 0; name[a] != '\0'; a++) {
				read_name[loop][a] = name[a];
			}
			read_name[loop][a] = '\0';
			loop++;
		}
		// Loop to arrange the score in Ascending Order
		for (int a = 0; a < loop; a++) {
			for (int b = 0; b < loop - 1; b++) {
				if (read_score[a] > read_score[b]) {
					int temp = read_score[a];
					read_score[a] = read_score[b];
					read_score[b] = temp;
					char* tem = NULL;
					tem = read_name[a];
					read_name[a] = read_name[b];
					read_name[b] = tem;
				}
			}
		}
		// Creatin new file to save the records in ascending order
		ofstream file2("highrecord.txt");
		for (int a = 0; a < loop; a++) {
			if (a == 0) {
				file2 << read_name[a] << " " << read_score[a];
			}
			else {
				file2 << "\n" << read_name[a] << " " << read_score[a];
			}
		}
		file2.close();
		file.close();

		// Deleting the dynamic 2-D Array
		for (int a = 0; a < 5; a++) {
			delete[] read_name[a];
		}
		delete[] read_name;
	}
}

// Function to check the given in dictionary
bool dictionary_check(char word[], int size) {
	ifstream file("dictionary.txt");
	if (file.is_open()) {
		char read[20];
		int check = 0;
		for (int a = 0; !file.eof() && check != size; a++) {
			file >> read;
			check = 0;
			for (int b = 0; b < size; b++) {
				if (read[b] == word[b]) {
					check++;
				}
			}
		}
		if (check == size) {
			// Return true if word is found in dictionary file
			return true;
		}
		else {
			// If word not found it will return false
			return false;
		}
		file.close();
	}
	else {
		// Also return false when dictionary file not found
		cout << "Dictionary File Not Found!..." << endl;
		return false;
	}
}

// Function to check word in row/column wise forward direction
bool easy(char word[], int size) {

	// For checking in row wise forward direction
	int check = 0;
	int index = 0;
	for (int r = 0; r < row; r++) {
		check = 0;
		index = 0;
		for (int c = 0; c < col; c++) {
			if (word[index] == board[r][c]) {
				check++;
				index++;
			}
			else {
				check = 0;
				index = 0;
			}
			if (check == size) {
				// Return true if found in forward row wise
				return true;
			}
		}
	}

	// For checking in column wise forward direction
	for (int c = 0; c < col; c++) {
		check = 0;
		index = 0;
		for (int r = 0; r < row; r++) {
			if (word[index] == board[r][c]) {
				check++;
				index++;
			}
			else {
				check = 0;
				index = 0;
			}
			if (check == size) {
				// Return true if found in forward column wise
				return true;
			}
		}
	}
	// If word not found in any of the direction, it will return false
	return false;
}

// Function to check word in row/column reverse direction
// it is reverse of easy function
bool intermediate(char word[], int size) {

	// For checking in row wise reverse direction
	int check = 0;
	int index = size - 1;
	for (int r = 0; r < row; r++) {
		check = 0;
		index = size - 1;
		for (int c = 0; c < col; c++) {
			if (word[index] == board[r][c]) {
				check++;
				index--;
			}
			else {
				check = 0;
				index = size - 1;
			}
			if (check == size) {
				// Return true if found in reverse row wise
				return true;
			}
		}
	}

	// For checking in column wise reverse direction
	for (int c = 0; c < col; c++) {
		check = 0;
		index = size - 1;
		for (int r = 0; r < row; r++) {
			if (word[index] == board[r][c]) {
				check++;
				index--;
			}
			else {
				check = 0;
				index = size - 1;
			}
			if (check == size) {
				// Return true if found in reverse column wise
				return true;
			}
		}
	}
	// If word not found in any of the reverse direction, it will return false
	return false;
}

// Function to check word in diagonal directions of grid
bool difficult(char word[], int size) {
	int check = 0;
	int index = size - 1;

	// For forward diagonal wise direction
	for (int r = 0; r <= row - size; r++) {
		for (int c = 0; c <= col - size; c++) {
			check = 0;
			index = size - 1;
			for (int a = 0; a < size; a++) {
				if (word[index - a] == board[r + a][c + a])
					check++;
			}
			if (check == size) {
				// Return true if found in forward diagonal wise
				return true;
			}
		}
	}

	// For backward diagonal wise direction
	for (int r = 0; r <= row - size; r++) {
		for (int c = col - 1; c >= size - 1; c--) {
			check = 0;
			index = size - 1;
			for (int a = 0; a < size; a++) {
				if (word[index - a] == board[r + a][c - a])
					check++;
			}
			if (check == size) {
				// Return true if found diagonal wise direction
				return true;
			}
		}
	}

	// These are reverse of forward wise loops
	// For forward reverse diagonal wise direction
	for (int r = row - 1; r >= size - 1; r--) {
		for (int c = 0; c <= col - size; c++) {
			check = 0;
			index = size - 1;
			for (int a = 0; a < size; a++) {
				if (board[r - a][c + a] == word[index - a])
					check++;
			}
			if (check == size) {
				// Return true if found in reverrse diagonal wise direction
				return true;
			}
		}
	}

	// For backward reverse diagonal wise direction
	for (int r = row - 1; r >= size - 1; r--) {
		for (int c = col - 1; c >= size - 1; c--) {
			check = 0;
			index = size - 1;
			for (int a = 0; a < size; a++) {
				if (word[index - a] == board[r - a][c - a])
					check++;
			}
			if (check == size) {
				// Return true if found in backward reverse diagonal wise direction
				return true;
			}
		}
	}
	// Return false if not found in any of the diagonal direction
	return false;
}

// Function to save the current state of game or pause it
void pause_game(char name[], int score_f, int lives_f) {

	// Creating the new file
	ofstream file("pausegame.txt");

	// Saving the grid in file
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < col; c++) {
			file << board[r][c];
		}
		file << endl;
	}
	// Also saving the score and lives left
	file << name << " " << score_f << " " << lives_f;
	file.close();
}

// Function to take input of word for puzzle from user
void input_word(char name_f[], int& score, int max, int& lives) {
	char word[16];
	int word_size;

	// Loop to take word from user until user enter only 'p' or 'P'
	for (int a = 0; lives > 0 && score < max; a++) {
		cout << "\nEnter the Word: ";
		cin >> word;

		// Condition to call the pause_game function and break the loop if user enter only 'p'
		if (word[0] == 'p' || word[0] == 'P' && word[1] == '\0') {
			pause_game(name_f, score, lives);
			break;
		}

		// Loop to find the size of user entered word
		word_size = 0;
		for (int a = 0; word[a] != '\0'; a++) {
			word_size++;
		}

		// If condition to check if word is present in dictionary
		if (dictionary_check(word, word_size) == true) {

			// If word is present in the dictionary then call the word checking 
			// functions according to level
			// Easy function is used in every level, so it is out of level if conditions
			if (easy(word, word_size) == true) {
				score += 10;
				cout << "Found!" << endl;
				print_score(score, lives);
				// if word found then other conditions will not be checked because of continue
				continue;
			}
			if (level == 1) {
				// If level is 1 and word not found in through the easy function then
				// this messaege will be printed and one life will be deducted
				lives--;
				cout << "Not Found!" << endl;
				print_score(score, lives);
			}
			else if (level == 2) {
				// If level is 2 then call also call the intermediate function
				if (intermediate(word, word_size) == true) {
					score += 10;
					cout << "Found!" << endl;
				}
				else {
					lives--;
					cout << "Not Found!" << endl;
				}
				print_score(score, lives);
			}

			// Level 3 will have also have difficult with intermediate
			else if (level == 3) {
				if (intermediate(word, word_size) == true) {
					score += 10;
					cout << "Found!" << endl;
				}
				else if (difficult(word, word_size) == true) {
					score += 10;
					cout << "Found!" << endl;
				}
				else {
					lives--;
					cout << "Not Found!" << endl;
				}
				print_score(score, lives);
			}
		}
		// Else to print this message if word not found in dictionary
		else {
			cout << "Word Not Found in Dictionary!..." << endl;
			cout << "Try Again!" << endl;
		}
		// Condition to print this message if lives become zero
		if (lives == 0) {
			cout << "Your Lives are 0 !!\nTry Again!" << endl;
		}
	}
}

// Returning Funtion to print the resume menu and take input from user
bool resume_menu() {
	char choice = '\0';
	// Loop will be repeating until user enter 'r' or 'e'
	while (choice != 'e' && choice != 'E' && choice != 'r' && choice != 'R') {
		cout << "\n--------------------" << endl;
		cout << "*Enter 'R' for Resume" << endl;
		cout << "*Enter 'E' for Exit" << endl;
		cout << "--------------------" << endl;
		cout << "Enter Your Choice: ";
		cin >> choice;
		// If user enter char ther than 'e' or 'r' then this message will be printed
		if (choice != 'e' && choice != 'E' && choice != 'r' && choice != 'R') {
			cout << "\nInvalid Input!.." << endl;
			cout << "Please Enter Again: " << endl;
		}
	}
	if (choice == 'r' || choice == 'R') {
		// If user enter 'r' than the function will return true
		return true;
	}
	else {
		// If user enter 'e' than the function will return false
		return false;
	}
}
// Function to read the Paused Game and continue it from where it was left
void resume() {
	ifstream file("pausegame.txt");
	if (!file.is_open()) {
		cout << "No Paused Game Found!" << endl; // If file is not found
	}
	else {
		char player_name[15];
		int score, lives;
		int maxscore = 300; // Max Score is set to 300

		read_board(file); // Global 2-D array will be initialized with pause game board

		// Player name, Score, Lives will also readed after board
		file >> player_name;
		file >> score;
		file >> lives;

		file.close(); // Closing the file

		// Printing this message with readed player name
		cout << "\n\t\tWELCOME BACK " << player_name << endl;

		// Calling this function to reselect the level by user
		level_select();

		print_board(); // Printing paused board on console

		cout << "\nYour Previous Score:" << endl;
		print_score(score, lives); // Printing Previous Score and lives

		// Calling input_word function to continue the game
		input_word(player_name, score, maxscore, lives);

		// Condition to print this message if score is greater or equal to maxscore
		if (score >= maxscore) {
			cout << "Congratulations!\nYou Have Completed the Puzzle!!!" << endl;
		}
		// Only print the resume menu if lives are greater than 0
		else if (lives > 0) {
			if (resume_menu() == true) {
				resume();
			}
		}

		// Calling this function to update the score on highrecords file
		update_highrecord(player_name, score);
	}
}

// Function to start the new game
void new_game() {
	cout << "\n\t\t-----NEW GAME-----" << endl;
	ifstream file("board.txt");
	if (!file.is_open()) {
		cout << "No Board File Found in directory!" << endl; // If board file is not found
	}
	else {
		char player_name[15];
		int lives = 3;
		int score = 0;
		int maxscore = 300; // Max Score is set to 300

		read_board(file); // To read the board

		file.close(); // Closing the file

		// Taking input of user name
		cout << "\nPlease Enter Your Name: ";
		cin >> player_name;

		level_select(); // Ask user to select the level
		cout << endl;

		print_board(); // Print the board on console

		// Calling the input_word function to take input of word from user
		input_word(player_name, score, maxscore, lives);

		// If score is greater or equal to maxscore(300) than this message will be printed 
		if (score >= maxscore) {
			cout << "Congratulations!\nYou Have Completed the Puzzle!!!" << endl;
		}
		// Only print the resume menu if lives are greater than zero and score is less than maxscore
		else if (lives > 0) {
			if (resume_menu() == true) {
				resume();
			}
		}

		// Calling function to update the highrecords file
		update_highrecord(player_name, score);
	}
}

// Function to read and print the highrecord file
void print_highrecord() {
	ifstream file("highrecord.txt");
	if (!file.is_open()) {
		cout << "\nHigh Records File Not Found!..." << endl; // If high record file not found
	}
	else {
		// Using 2-D Array for names
		char** read_name = new char* [5];
		for (int a = 0; a < 5; a++) {
			read_name[a] = new char[20];
		}

		int read_score[5];
		// Loop to initialize the name and score array with data in highrecord file
		int a;
		for (a = 0; a < 5 && !file.eof(); a++) {
			file >> read_name[a];
			file >> read_score[a];
		}
		file.close(); // Closing the file

		cout << "\n-------------------------------" << endl;
		cout << "  ---High Records---" << endl;
		cout << "No. Names\tScores" << endl;

		// Printing the names and scores on console
		for (int b = 0; b < a; b++) {
			cout << b + 1 << ".  " << read_name[b] << "  \t" << read_score[b] << endl;
		}
		cout << "-------------------------------" << endl;

		// Deallocating the 2-d dynamic array
		for (int a = 0; a < 5; a++) {
			delete[] read_name[a];
		}
		delete[] read_name;
	}
}

// Function to print the level selection menu and take input from user
void level_select() {
	level = -1;
	cout << "\n-------------------------------" << endl;
	cout << "  ---LEVEL SELECTION MENU---" << endl;
	// Loop will repeat until user enter 1,2,3
	while (level != 1 && level != 2 && level != 3) {
		cout << "-------------------------------" << endl;
		cout << "Press 1 for Easy Level" << endl;
		cout << "Press 2 for Intermediate Level" << endl;
		cout << "Press 3 for Difficult Level" << endl;
		cout << "-------------------------------" << endl;
		cout << "Please Enter Your Choice: ";
		cin >> level;
		// Message to print if user enter number other than 1,2,3
		if (level != 1 && level != 2 && level != 3) {
			cout << "\nInvalid Choice" << endl;
			cout << "Please Select Again: " << endl;
		}
	}
	// Conditions to print the updated level
	if (level == 1) {
		cout << "\n\t\t--LEVEL: EASY--" << endl;
	}
	else if (level == 2) {
		cout << "\n\t\t--LEVEL: Intermediate--" << endl;
	}
	else if (level == 3) {
		cout << "\n\t\t--LEVEL: Difficult--" << endl;
	}
}
