#include<iostream>
using namespace std;

int naturalSum(int n) {
	if (n == 1) {
		return n;
	}
	return n + naturalSum(n - 1);
}

int main() {

	int n;
	cout << "Enter Number for Sum of Natural Numbers: ";
	cin >> n;

	cout << "Natural Sum of " << n << " is " << naturalSum(n) << endl;

	return 0;
}