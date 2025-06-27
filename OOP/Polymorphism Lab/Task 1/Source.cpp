#include "StockItem.h"
#include "Handouts.h"
#include "LectureDVD.h"

int main() {
    char choice;
    int items;
    int index = 0;

    cout << "How many items do you want to enter?: ";
    cin >> items;

    StockItem** itemsArray = new StockItem * [items];

    while (index < items) {
        cout << "\nEnter Choice: H for Handouts, L for LectureDVD: ";
        cin >> choice;

        if (choice == 'H' || choice == 'h') {
            char name[100], courseName[100], author[100];
            int courseCode, quantity, price, pages;
            cout << "\nEnter Item Name: ";
            cin >> name;
            cout << "Enter Item Quantity: ";
            cin >> quantity;
            cout << "Enter Item Price: ";
            cin >> price;
            cout << "Enter Course Name: ";
            cin >> courseName;
            cout << "Enter Course Code: ";
            cin >> courseCode;
            cout << "Enter number of pages: ";
            cin >> pages;
            cout << "Enter author: ";
            cin >> author;
            itemsArray[index] = new Handouts(name, courseName, courseCode, quantity, price, author, pages);
            index++;
        }
        else if (choice == 'L' || choice == 'l') {
            char name[100], courseName[100];
            int courseCode, quantity, price, minutes, lectures;
            cout << "\nEnter Item Name: ";
            cin >> name;
            cout << "Enter Item Quantity: ";
            cin >> quantity;
            cout << "Enter Item Price: ";
            cin >> price;
            cout << "Enter Course Name: ";
            cin >> courseName;
            cout << "Enter Course Code: ";
            cin >> courseCode;
            cout << "Enter minutes: ";
            cin >> minutes;
            cout << "Enter lectures: ";
            cin >> lectures;

            itemsArray[index] = new LectureDVD(name, courseName, courseCode, quantity, price, minutes, lectures);
            index++;
        }

        char more;
        cout << "\nDo you want to enter more data (Y for yes, N for no): ";
        cin >> more;
        if (more == 'N' || more == 'n') {
            break;
        }
    }

    for (int i = 0; i < items; i++) {
        itemsArray[i]->Display();
        cout << "-----------------------------" << endl;
    }

    // Clean up
    for (int i = 0; i < index; ++i) {
        delete itemsArray[i];
    }
    delete[] itemsArray;

    return 0;
}
