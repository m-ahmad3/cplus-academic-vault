#include "MyList.h"

template<class T>
void showList(MyList<T> s) {
	if (s.empty() != 1) {
		for (int a = 0; a < s.size(); a++) {
			cout << s[a] << " ";
		}
		cout << endl;
	}
	else {
		cout << "List is Empty" << endl;
	}
}

int main()
{
    cout << "Integer Type List: " << endl;
	MyList<int> list1(5);

	// Add elements to the list
	list1.addElement(10);
	list1.addElement(20);
	list1.addElement(30);

	// Display the contents of the list
	cout << "Contents of list1: ";
	showList(list1);


    cout << "\nDouble Type List: " << endl;
    MyList<double> doubleList(5);

    // Add elements to the double list
    doubleList.addElement(3.14);
    doubleList.addElement(2.718);
    doubleList.addElement(1.618);
    doubleList.addElement(1.414);
    doubleList.addElement(2.645);

    // Display the contents of the double list
    cout << "Contents of doubleList: ";
    showList(doubleList);

    // Try to add another element when the list is full
    doubleList.addElement(9.81); // This should trigger "The List is Full"

    // Remove the last element
    doubleList.removeElement();

    // Display the updated double list
    cout << "Contents of doubleList after removing the last element: ";
    showList(doubleList);

    // Check if the list is empty
    cout << "Is doubleList empty? " << (doubleList.empty() ? "Yes" : "No") << endl;

    // Check if the list is full
    cout << "Is doubleList full? " << (doubleList.full() ? "Yes" : "No") << endl;

    // Get the last element of the list
    cout << "Last element in doubleList: " << doubleList.last() << endl;


	return 0;
}