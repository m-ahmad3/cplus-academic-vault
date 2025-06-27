#include "Stack.h"

// Task 2
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


// Task 3
template<class T>
T* reverseElements(const T* arr, int size) {
    Stack<T> stack;

    for (int a = 0; a < size; a++) {
        stack.push(arr[a]);
    }

    T* reversedArray = new T[size];

    for (int a = 0; a < size; a++) {
        reversedArray[a] = stack.pop();
    }

    return reversedArray;
}

template<typename T>
bool isPalindrome(const T* arr, int size) {
    T* reversedArray = reverseElements(arr, size);

    bool palindrome = true;
    for (int a = 0; a < size; a++) {
        if (arr[a] != reversedArray[a]) {
            palindrome = false;
            break;
        }
    }

    delete[] reversedArray; // Free dynamically allocated memory
    return palindrome;
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

    // Test with integer array
    const int sizeInt = 5;
    int* intArr = new int[sizeInt]{ 1, 2, 3, 2, 1 };
    
    cout << "Integer Array is: ";
    for (int a = 0; a < sizeInt; a++) {
        cout << intArr[a] << " ";
    }
    cout << endl;

    cout << "Is this Array Palindrome: " << isPalindrome(intArr, sizeInt) << endl;

    intArr = reverseElements<int>(intArr, sizeInt);

    cout << "Reversed Array: ";
    for (int a = 0; a < sizeInt; a++) {
        cout << intArr[a] << " ";
    }
    cout << endl;
    
    
    
	return 0;
}