#include<iostream>
#include<fstream>
using namespace std;

// Task 1
/*
void swap(int& a, int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main()
{
	int n1, n2;

	cout << "Enter First Integer: ";
	cin >> n1;

	cout << "Enter Second Integer: ";
	cin >> n2;
	
	swap(n1, n2);

	cout << "First Integer is: " << n1 << endl;
	cout << "Second Integer is: " << n2 << endl;

	return 0;
}
*/

// Task 2
/*
int strLength(const char* src) {
	int count = 0;
	for (int a = 0; src[a] != '\0'; a++) {
		count++;
	}
	return count;
}

int main()
{
	char arr[20];

	cout << "Enter Your Name: ";
	cin >> arr;

	int size;

	size = strLength(arr);

	cout << "The Size of Array is: " << size << endl;

	return 0;
}
*/

// Task 3
/*
int strLength(const char* src) {
	int count = 0;
	for (int a = 0; src[a] != '\0'; a++) {
		count++;
	}
	return count;
}

void strCopy(char*& dest, const char* src) {
	
	int size;
	size = strLength(src);

	dest = new char[size + 1];
	
	int a;
	for (a = 0; a < size; a++) {
		dest[a] = src[a];
	}
	dest[a] = '\0';
}

int main()
{
	char arr1[20];

	cout << "Enter Your Name: ";
	cin >> arr1;

	char* arr2;

	strCopy(arr2, arr1);

	cout << "Copied Array: " << arr2 << endl;
	
	return 0;
}
*/


// Task 4


int* regrow(int* old_arr, int size) {
	int* new_arr = NULL;
	new_arr = new int[size];

	for (int a = 0; a < size; a++) {
		new_arr[a] = old_arr[a];
	}

	delete[] old_arr;
	old_arr = NULL;

	return new_arr;
}

int* dyn(int* arr,int size) {
	arr = new int[size];

	return arr;
}
/*
void read(int*& even2, int* odd2, int& s1, int& s2) {

	ifstream file("data.txt");

	if (file.is_open() == 1) {
		cout << "File is Not Found!..." << endl;
	}
	else {
		int input;
		char space;
		file >> input>>space;
		cout << input;
		for (int a = 0; input != -1; a++) {
			file >> input;
			cout << input;
			if (input % 2 == 0) {
				even2 = regrow(even2, s1);
				even2[s1 - 1] = input;
				s1++;
			}
			else if (input % 2 != 0) {
				odd2 = regrow(odd2, s2);
				odd2[s2 - 1] = input;
				s2++;
			}
		}
		file.close();
	}


}
*/

int main()
{
	int s_even = 1, s_odd = 1;
	int* even = NULL;
	int* odd = NULL;
	even = dyn(even, s_even);
	odd = dyn(odd, s_odd);
	//read(even, odd, s_even, s_odd);

	int in;
	ifstream file("data.txt");
	file >> in;
	cout << in;

	cout << "Even Array: ";
	for (int a = 0; a < s_even; a++) {
		cout << even[a] << " ";
	}
	cout << endl;
	
	cout << "Odd Array: ";
	for (int a = 0; a < s_odd; a++) {
		cout << odd[a] << " ";
	}
	cout << endl;

	return 0;
}