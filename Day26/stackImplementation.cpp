#include<iostream>
using namespace std;

class Stack {
    public:
    int* arr;
    int size;
    int top;

    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }

    void push(int data) {
        if (top == size - 1) cout << "Stack is overflow" << endl;
        else {
            arr[++top] = data;
        }
    }

    void pop() {
        if (top == -1) cout << "Stack is underflow" << endl;
        else top--;
    }

    int getTop() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else return arr[top];
    }

    bool isEmpty() {
        if (top == -1) return true;
        else return false;
    }

    int getSize() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return 0;
        }
        else return top + 1;
    }
};

int main() {
    Stack st(5);

    st.push(2);
    st.push(3);
    st.push(4);
    st.push(2);
    st.push(3);
    // st.push(4);

    cout << st.getSize() << endl;
    cout << st.getTop() << endl;
    st.pop();
    cout << st.getTop() << endl;
    return 0;
}