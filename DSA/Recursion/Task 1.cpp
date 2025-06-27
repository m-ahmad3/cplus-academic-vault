#include<iostream>
using namespace std;


// Task 1
int fact(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	return n * fact(n - 1);
}

int main() {

	int n;
	cout << "Enter Number for Factorial: ";
	cin >> n;

	cout << "Fatcorial of " << n << " is " << fact(n) << endl;

	return 0;
}