#include<iostream>
using namespace std;

int sumofDigits(int n) {
	if (n == 0) {
		return 0;
	}
	int temp = n % 10;
	return temp + sumofDigits(n / 10);
}

int main()
{
	int n;
	cout << "Enter a Number to get Sum of Digits: ";
	cin >> n;

	cout << "Sum of Digits is: " << sumofDigits(n) << endl;

	return 0;
}