#include <iostream>
using namespace std;


void reverse(char* str, int index)
{
	if (str[index] == '\0')
	{
		return;
	}
	char temp = str[index];
	reverse(str, index + 1); 
	cout << temp;		
}


int main()
{
	char a[50];
	cout << "Enter the String to Reverse: ";
	cin >> a;
	cout << "Reversed String is: ";
	reverse(a, 0);

	return 0;
}


