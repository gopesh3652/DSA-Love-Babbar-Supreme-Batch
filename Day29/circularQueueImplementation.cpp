#include<iostream>
using namespace std;

class CircularQueue {
    int* arr;
    int size;
    int front;
    int rear;

    public:
    CircularQueue(int size) : size(size), arr(new int[size]), front(-1), rear(-1) {}

    bool isEmpty() {
        if (front == -1 && rear == -1) return 1;
        return 0;
    }

    void push(int data) {
        // overflow
        if ((front == 0 && rear == size - 1) || rear == front - 1) {
            cout << "queue overflow." << endl;
        }
        else if (isEmpty()) {
            // empty queue
            front++;
            rear++;
            arr[rear] = data;
        }
        else if (rear == size - 1 && front != 0) {
            // circular nature
            rear = 0;
            arr[rear] = data;
        }
        else {
            // normal case
            rear++;
            arr[rear] = data;
        }
    }

    void pop() {
        if (isEmpty()) {
            // empty queue
            cout << "queue underflow" << endl;
        }
        else if (front == rear) {
            // single element
            arr[front] = -1;
            front = rear = -1;
        }
        else if (front == size - 1) {
            // circular nature
            arr[front] = -1;
            front = 0;
        }
        else {
            // normal behaviour
            arr[front] = -1;
            front++;
        }
    }

    int getSize() {
        if (front == -1 && rear == -1) return 0;
        int c_size = front > rear ? (size - front + rear + 1) : (rear - front + 1);
        return c_size;
        // return abs(abs(size - front) - abs(size - rear));
    }

    int getfront() {
        return arr[front];
    }

    int getRear() {
        return arr[rear];
    }

    void print() {
        cout << "Printing queue..." << "\t";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << "\t";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

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

    // q.push(50);
    // q.print();

    q.pop();
    q.print();
    q.pop();
    q.print();

    q.push(100);
    q.print();
    q.push(200);
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

    q.push(20);
    q.print();
    q.push(30);
    q.print();
    q.push(40);
    q.print();
    q.push(50);
    q.print();

    // q.push(50);
    // q.print();

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

    // q.pop();
    // q.print();

    q.push(50);
    q.print();

    q.push(40);
    q.print();
    q.push(60);
    q.print();

    q.pop();
    q.print();
    q.pop();
    q.print();
    q.pop();
    q.print();

    cout << "size: " << q.getSize() << endl;
    cout << "front: " << q.getfront() << endl;
    cout << "rear: " << q.getRear() << endl;
    return 0;
}