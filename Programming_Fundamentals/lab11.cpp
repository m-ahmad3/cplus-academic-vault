// Task 1:
/*
#include<iostream>
using namespace std;
void input(int* arr_f,int size_f) {
	cout << "Enter the Numbers of Array: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr_f[a];
	}
}
void print(int* arr_f, int size_f) {
	cout << "Array after Deletion: ";
	for (int a = 0; a < size_f; a++) {
		cout << arr_f[a] << " ";
	}
	cout << endl;
}
int* shrink(int* oldarray, int size_f, int num_f) {

	int* newarray = new int[size_f-1];
	int index = 0;
	for (int a = 0; a < size_f; a++) {
		if (oldarray[a] != num_f) {
			newarray[index] = oldarray[a];
			index++;
		}
	}
	delete[] oldarray;
	oldarray = NULL;
	return newarray;
}
int main()
{
	int size, num;
	cout << "Enter the Size of Array: ";
	cin >> size;
	int* arr = NULL;
	arr = new int[15];
	input(arr, size);
	cout << "Enter the number to Remove: ";
	cin >> num;
	arr=shrink(arr, size, num);
	size--;
	print(arr, size);
	delete[] arr;
	return 0;
}
*/

// Task 2:
/*
#include<iostream>
using namespace std;
void input(int* arr_f, int size_f) {
	cout << "Enter the Numbers of Array: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr_f[a];
	}
}
void print(int* arr_f, int size_f) {
	cout << "Array after Odd Removal: ";
	for (int a = 0; a < size_f; a++) {
		cout << arr_f[a] << " ";
	}
	cout << endl;
}

int* shrink(int* oldarray, int size_f, int num_f) {

	int* newarray = new int[size_f-1];
	int index = 0;
	for (int a = 0; a < size_f; a++) {
		if (oldarray[a] != num_f) {
			newarray[index] = oldarray[a];
			index++;
		}
	}
	delete[] oldarray;
	oldarray = NULL;
	return newarray;
}
void odd_remover(int*& arr_f, int& size_f) {
	for (int a = 0; a < size_f; a++) {
		if (arr_f[a] % 2 != 0) {
			arr_f = shrink(arr_f, size_f, arr_f[a]);
			size_f--;
		}
	}
}
int main()
{
	int size;
	cout << "Enter the Size of Array: ";
	cin >> size;
	int* arr = NULL;
	arr = new int[15];
	input(arr, size);
	odd_remover(arr, size);
	print(arr, size);
	delete[] arr;
	return 0;
}
*/

// Task 3:
/*
#include<iostream>
using namespace std;

void input(int* arr_f, int size_f) {
	cout << "Enter the Numbers of Array: ";
	for (int a = 0; a < size_f; a++) {
		cin >> arr_f[a];
	}
}
void print(int* arr_f, int size_f) {
	cout << "Array after Even Index Removal: ";
	for (int a = 0; a < size_f; a++) {
		cout << arr_f[a] << " ";
	}
	cout << endl;
}

int* shrink(int* oldarray, int& size_f) {
	int odd = size_f / 2;
	int* newarray = new int[odd];
	int index = 0;
	for (int a = 0; a < size_f; a++) {
		if (a % 2 != 0) {
			newarray[index] = oldarray[a];
			index++;
		}
	}
	size_f = odd;
	delete[] oldarray;
	oldarray = NULL;
	return newarray;
}

int main()
{
	int size;
	cout << "Enter the Size of Array: ";
	cin >> size;
	int* arr = NULL;
	arr = new int[15];
	input(arr, size);
	arr = shrink(arr, size);
	print(arr, size);
	delete[] arr;
	return 0;
}
*/

/*
// Task 4:
#include<iostream>
using namespace std;

const int row = 2, col = 3;

void getdata(float arr[][col]) {
	for (int a = 0; a < row; a++) {
		if (a == 0) {
			cout << "Enter the Highest Temperature: " << endl;
		}
		if (a == 1) {
			cout << "Enter the Lowest Temperature: " << endl;
		}
		for (int b = 0; b < col; b++) {
			cout << "For Month "<< b + 1 << ": ";
			cin >> arr[a][b];
		}
		cout << endl;
	}
}
float avghigh(float arr[][col]) {
	float avg = 0;
	for (int b = 0; b < col; b++) {
			avg += arr[0][b];
	}
	avg /= 2;
	return avg;
}
float avglow(float arr[][col]) {
	float avg = 0;
	for (int b = 0; b < col; b++) {
		avg += arr[1][b];
	}
	avg /= 2;
	return avg;
}
int main()
{
	float data[row][col];
	float avg_high, avg_low;
	getdata(data);
	avg_high = avghigh(data);
	avg_low = avglow(data);
	
	cout << "Average High Temperature: " << avg_high << endl;
	cout << "Average Low Temperature: " << avg_low << endl;
	return 0;
}
*/

// Task 5:
/*
#include<iostream>
using namespace std;

void input(int arr_f[][3]) {
	cout << "Enter the Values of 3X3 Matrix: " << endl;
	for (int a = 0; a < 3; a++) {
		cout << "For Row " << a + 1 << ": ";
		for (int b = 0; b < 3; b++) {
			cin >> arr_f[a][b];
		}
		cout << endl;
	}
}
void swap(int arr_f[][3]) {
		for (int a = 0; a < 3; a++) {
			int temp;
			temp = arr_f[a][0];
			arr_f[a][0] = arr_f[a][2];
			arr_f[a][2] = temp;
		}
}
void print(int arr_f[][3]) {
	cout << "After Swapping: ";
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			cout<< arr_f[a][b]<<" ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[3][3];
	input(arr);
	swap(arr);
	print(arr);
	return 0;
}
*/

// Task 6:
/*
#include<iostream>
using namespace std;

void input(int arr_f[][3]) {
	cout << "Enter the Values of 3X3 Matrix: " << endl;
	for (int a = 0; a < 3; a++) {
		cout << "For Row " << a + 1 << ": ";
		for (int b = 0; b < 3; b++) {
			cin >> arr_f[a][b];
		}
		cout << endl;
	}
}
void multiply(int arr_f[][3],int num_f) {
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			arr_f[a][b] *= num_f;
		}
	}
}
void print(int arr_f[][3]) {
	cout << "After Multiplication: " << endl;
	for (int a = 0; a < 3; a++) {
		for (int b = 0; b < 3; b++) {
			cout << arr_f[a][b] << " ";
		}
		cout << endl;
	}
}
int main()
{
	int arr[3][3];
	int num;
	input(arr);
	cout << "Enter the No. to Multiply: ";
	cin >> num;
	multiply(arr,num);
	print(arr);
	return 0;
}
*/