#include<iostream>
#include<queue>
using namespace std;

void interleaveQueue(queue<int>& q) {
    int size = q.size();
    int half = size / 2;

    queue<int>tempQ;

    while (half) {
        tempQ.push(q.front());
        q.pop(); 
        half--;
    }

    while (!tempQ.empty()) {
        q.push(tempQ.front());
        tempQ.pop();
        q.push(q.front());
        q.pop();
    }
}

int main() {
    queue<int>q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // q.push(70);

    interleaveQueue(q);

    while (!q.empty()) {
        cout << q.front() << "\t";
        q.pop();
    } cout << endl;

    return 0;
}

