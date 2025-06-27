#include<iostream>
using namespace std;

int sumElements(int* arr, int N) {
	if (N == 0) {
		return 0;
	}

	int temp = arr[N-1];

	return temp + sumElements(arr, N-1);
}

int main()
{
	int n[5];
	cout << "Enter the 5 Elements of Array: ";
	for (int a = 0; a < 5; a++) {
		cin >> n[a];
	}
	
	cout << "Sum of Array Elements is: " << sumElements(n, 5) << endl;

	return 0;
}