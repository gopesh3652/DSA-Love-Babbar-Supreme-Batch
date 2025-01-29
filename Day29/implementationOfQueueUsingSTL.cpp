#include<iostream>
#include<queue>
using namespace std;

int main() {
    // creation
    queue<int> q;

    // insertion
    q.push(5);

    // size
    cout << "Size of queue: " << q.size() << endl;

    // empty
    if (q.empty()) cout << "Queue is empty." << endl;
    else cout << "Queue is not empty" << endl;

    // remove
    q.pop();

    cout << "Size of queue after removal of element: " << q.size() << endl;

    q.push(10);
    q.push(20);
    q.push(30);

    // Front element
    cout << "Front element: " << q.front() << endl;

    // Back element 
    cout << "Back element: " << q.back() << endl;

    return 0;
}