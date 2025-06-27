#include"Student.h"

void displayStudents(const Student arr[], int size) {
    for (int a = 0; a < size; a++) {
        cout << a + 1 <<". " << arr[a];
    }
    cout << endl;
}

int main()
{
    const int size = 10;
    Student students[size] = {
         Student("L1F22BSCS0634", 3.8),
         Student("L1F22BSCS0620", 2.2),
         Student("L1F22BSCS0635", 3.9),
         Student("L1F22BSCS0615", 3.2),
         Student("L1F22BSCS0621", 3.1),
         Student("L1F22BSCS0619", 2.5),
         Student("L1F22BSCS0601", 3.4),
         Student("L1F22BSCS0602", 3.0),
         Student("L1F22BSCS0631", 3.7),
         Student("L1F22BSCS0627", 3.3)
    };

    cout << "Before Selection Sort: " << endl;
    displayStudents(students, size);

    students->selectionSort(students, size);

    cout << "After Selection Sort: " << endl;
    displayStudents(students, size);

    double input;
    cout << "Enter a CGPA to Search by Linear Search: ";
    cin >> input;

    int ind = students->linearSearch(students, size, input);

    if (ind == -1) {
        cout << "CGPA Not Found!..." << endl;
    }
    else {
        cout << input <<" CGPA is at Index " << ind << endl;
    }

    cout << "\nEnter a CGPA to Search by Binary Search: ";
    cin >> input;

    ind = students->BinarySearch(students, size, input);

    if (ind == -1) {
        cout << "CGPA Not Found!..." << endl;
    }
    else {
        cout << input << " CGPA is at Index " << ind << endl;
    }

    return 0;
}