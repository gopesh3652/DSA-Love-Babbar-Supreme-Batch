#include<iostream>
using namespace std;

class Deque {
    int* arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int _size) : size(_size), arr(new int[size]), front(-1), rear(-1) {}

    bool isEmpty() {
        if (front == -1 && rear == -1) return 1;
        return 0;
    }

    void push_back(int data) {
        // overflow
        if ((front == 0 && rear == size - 1) || rear == front - 1) {
            cout << "overflow" << endl;
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

    void push_front(int data) {
        // overflow
        if ((front == 0 && rear == size - 1) || rear == front - 1) {
            cout << "overflow" << endl;
        }
        else if (isEmpty()) {
            // empty queue
            rear++;
            front++;
            arr[front] = data;
        }
        else if (front == 0 && rear != size - 1) {
            // circular nature
            front = size - 1;
            arr[front] = data;
        }
        else {
            // normal case
            front--;
            arr[front] = data;
        }
    }

    void pop_front() {
        if (isEmpty()) {
            // underflow
            cout << "underflow" << endl;
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

    void pop_back() {
        // underflow
        if (isEmpty()) cout << "underflow" << endl;
        else if (front == rear) {
            // single element
            arr[rear] = -1;
            rear = front = -1;
        }
        else if (rear == 0) {
            // circular nature
            arr[rear] = -1;
            rear = size - 1;
        }
        else {
            // normal case
            arr[rear] = -1;
            rear--;
        }
    }
};

int main() {

    return 0;
}