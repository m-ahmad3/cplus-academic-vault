#include"CircularArray.h"

template<class T>
void showQueue(const CircularQueue<T>& obj) {
    if (obj.empty()) {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Elements in Queue: ";
    for (int a = obj.front; a != obj.rear; a = (a + 1) % obj.maxSize) {
        cout << obj.arr[a] << " ";
    }
    cout << obj.arr[obj.rear] << " ";  // To include the rear element
    cout << endl;
}

int main() {
    CircularQueue<int> c1;

    c1.enqueue(1);
    c1.enqueue(2);
    c1.enqueue(3);
    c1.enqueue(4);

    showQueue(c1);
    c1.dequeue();
    c1.dequeue();
    c1.dequeue();
    cout << "After Dequeuing some Elements: " << endl;
    showQueue(c1);

    cout << "Example of Char Queue: " << endl;
    CircularQueue<char> c2;
    c2.enqueue('A');
    c2.enqueue('h');
    c2.enqueue('m');
    c2.enqueue('a');
    c2.enqueue('d');
    showQueue(c2);
    c2.dequeue();
    c2.dequeue();
    c2.dequeue();
    cout << "After Dequeuing some Elements: " << endl;
    showQueue(c2);

    return 0;
}