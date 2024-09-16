#include<iostream>
using namespace std;

class twoStack {
    public:
    int* arr;
    int size;
    int top1;
    int top2;

    twoStack(int size) {
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }

    void push1(int data) {
        if (top2 - top1 == 1) {
            cout << "OVERFLOW" << endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }

    void push2(int data) {
        if (top2 - top1 == 1) {
            cout << "OVERFLOW" << endl;
            return;
        }
        top2--;
        arr[top2] = data;
    }

    void pop1() {
        if (top1 == -1) {
            cout << "UNDERFLOW" << endl;
            return;
        }
        arr[top1] == 0;
        top1--;
    }

    void pop2() {
        if (top2 == size) {
            cout << "UNDERFLOW" << endl;
            return;
        }
        arr[top2] = 0;
        top2++;
    }
};

int main() {
    twoStack st(6);
    st.push1(2);
    st.push1(3);
    st.push2(3);
    st.push2(3);
    st.push2(3);
    st.push2(3);
    st.push1(3);
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();
    st.pop2();

    return 0;
}