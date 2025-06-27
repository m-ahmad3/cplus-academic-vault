#include "Stack.h"

template<class T>
void showStack(Stack<T> s) {
	if (s.empty() != 1) {
		for (int a = 0; a < s.size(); a++) {
			cout << s[a] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Stack is Empty" << endl;
	}
}

int main()
{
    Stack<int> intStack;
    Stack<string> stringStack;

    // Test integer stack
    cout << "Testing integer stack:" << endl;
    intStack.push(10);
    intStack.push(20);
    intStack.push(30);
    cout << "Curent Stack: ";
    showStack(intStack); // Should show 10 20 30

    intStack.pop();
    cout << "After Poping: ";
    showStack(intStack); // Should show 10 20

    cout << "After Pushing: ";
    intStack.push(40);
    showStack(intStack); // Should show 10 20 40

    // Test string stack
    cout << "\nTesting string stack:" << endl;
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.push("Stack");
    cout << "Curent Stack: ";
    showStack(stringStack); // Should show Hello World Stack

    cout << "After Poping: ";
    stringStack.pop();
    showStack(stringStack); // Should show Hello World

    cout << "After Pushing: ";
    stringStack.push("Test");
    showStack(stringStack); // Should show Hello World Test
	return 0;
}