#include<iostream>
using namespace std;

class Queue {
    int* arr;
    int size;
    int front;
    int rear;

    public:
    Queue(int _size) : arr(new int[size]), size(_size), front(-1), rear(-1) {}

    bool isEmpty() {
        if (front == -1 && rear == -1) return 1;
        return 0;
    }

    void push(int data) {
        // chech full
        if (rear == size - 1) {
            cout << "Queue is full." << endl;
            return;
        }
        else if (isEmpty()) {
            // empty
            front++;
            rear++;
            arr[rear] = data;
        }
        else {
            // normal case
            rear++;
            arr[rear] = data;
        }
    }

    void pop() {
        // empty queue
        if (isEmpty()) {
            cout << "queue is empty." << endl;
            return;
        }
        else if (front == rear) {
            // single element in queue
            arr[front] = -1;
            rear = front = -1;
        }
        else {
            // normal case
            arr[front] = -1;
            front++;
        }
    }

    int getSize() {
        if (isEmpty()) return rear - front;
        return rear - front + 1;
    }

    int getFront() {
        if (isEmpty()) return front;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return rear;
        return arr[rear];
    }

    void print() {
        cout << "Printing queue...." << "\t";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.print();

    q.push(10);
    q.print();
    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();
    // q.pop();
    // q.print();

    // q.push(100);
    // q.print();

    if (q.isEmpty()) cout << "queue is empty." << endl;
    else cout << "queue is not empty." << endl;

    cout << "Size is : " << q.getSize() << endl;
    cout << "Front is : " << q.getFront() << endl;
    cout << "Rear is : " << q.getRear() << endl;


    return 0;
}