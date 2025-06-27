#include "Stack.h"
#include"Queue.h"

int main() {
    int choice, operation;
    Stack<int> stack;
    Queue<int> queue;
    int value;

    cout << "Choose Data Structure: " << endl;
    cout << "1. Stack (LIFO)" << endl;
    cout << "2. Queue (FIFO)" << endl;
    cout << "\nYour Choice: ";
    cin >> choice;
    system("cls");
    if (choice == 1) {
        do {
          
            cout << "\nStack Operations Menu:" << endl;
            cout << "1. Push" << endl;
            cout << "2. Pop" << endl;
            cout << "3. Peek" << endl;
            cout << "4. Display" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> operation;
            
            switch (operation) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                cout << "Top element: " << stack.peek() << endl;
                break;
            case 4:
                stack.display();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
            }
           
        } while (operation != 5);
    }
    else if (choice == 2) {
        do {
            cout << "\nQueue Operations Menu:" << endl;
            cout << "1. Enqueue" << endl;
            cout << "2. Dequeue" << endl;
            cout << "3. Front" << endl;
            cout << "4. Display" << endl;
            cout << "5. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> operation;

            switch (operation) {
            case 1:
                cout << "Enter value to enqueue: ";
                cin >> value;
                queue.enqueue(value);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                cout << "Front element: " << queue.front() << endl;
                break;
            case 4:
                queue.display();
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
            }
            
        } while (operation != 5);
    }
    else {

        cout << "Invalid choice! Exiting program." << endl;
    }

    return 0;
}
