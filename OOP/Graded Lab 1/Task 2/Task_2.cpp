#include"MyNum.h"

int main()
{
	// Taking input for first object of MyNum Class
	int input;
	cout << "Enter a Value for First Object: ";
	cin >> input;

	// Making one object of class MyNum
	MyNum n1(input);
	cout << "The Value Stored in First Object is: " << n1.getNum() << endl;
	
	// Taking input from user for the number of objects
	int size;
	cout << "\nEnter the Number of the Objects to Make: ";
	cin >> size;
	
	// Making an dynamic array of MyNum Class objects
	MyNum* n = new MyNum[size];

	// Taking input of value for each class from user
	cout << endl;
	for (int a = 0; a < size; a++) {

		cout << "Enter the Value for Object " << a + 1 << ": ";
		cin >> input;
		n[a].setNum(input);
	}

	// Printing the Unsorted values of objects
	cout << "\nUnsorted Objects: " << endl;
	for (int a = 0; a < size; a++) {
		cout << "Value in Object " << a + 1 << ": " << n[a].getNum() << endl;
	}

	// Sorting the the objects according to values stored in them
	for (int a = 0; a < size; a++) {
		for (int b = 0; b < size - 1; b++) {
			if (n[a].getNum() < n[b].getNum()) {
				int temp = n[a].getNum();
				n[a].setNum(n[b].getNum());
				n[b].setNum(temp);
			}
		}
	}

	// Printing the sorted object according to value
	cout << "\nSorted Objects: " << endl;
	for (int a = 0; a < size; a++) {
		cout << "Value in Object " << a + 1 << ": " << n[a].getNum() << endl;
	}

	return 0;
}