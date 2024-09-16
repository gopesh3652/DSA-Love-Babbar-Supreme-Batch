// Insertion in Linked List

#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    Node() {
        this->next = NULL;
    }

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void printAll(Node* head) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

// Insert at head
// pass head and tail by reference 
void insertAtHead(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        // LL empty
        // create new node
        Node* newNode = new Node(data);
        // update head and tail
        head = tail = newNode;
    }
    else {
        // LL non empty
        // create new node
        Node* newNode = new Node(data);
        // attach new node to head node
        newNode->next = head;
        // update head
        head = newNode;
    }
}

// insert at tail
// pass head and tail by reference 
void insertAttail(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        // LL is empty
        // create new node
        Node* newNode = new Node(data);
        // update head and tail
        head = tail = newNode;
    }
    else {
        // LL is non empty
        // create new node
        Node* newNode = new Node(data);
        // attach the node at the tail
        tail->next = newNode;
        // update tail
        tail = newNode;
    }
}

// Linked list traversal
int getLength(Node* head) {
    Node* temp = head;
    int length = 0;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

// Insert in middle
void insertInPosition(Node*& head, Node*& tail, int data, int position) {
    int length = getLength(head);

    if (position < 1 || position > length + 1) {
        cout << "Invald position." << endl;
        return;
    }
    if (position == 1) insertAtHead(head, tail, data);
    else if (position == length + 1) insertAttail(head, tail, data);
    else {
        // insert at middle of linked list
        // create new node
        Node* newNode = new Node(data);
        // traverse pewvious, current to position
        Node* prev = NULL;
        Node* curr = head;
        while (position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }
        // attach prev to new node
        prev->next = newNode;
        // attach new node to current
        newNode->next = curr;
    }
}

int main() {
    // Node* first = new Node(3);
    // Node* second = new Node(4);
    // Node* third = new Node(5);
    // Node* fourth = new Node(40);
    // Node* fifth = new Node(50);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;

    // Node* head = first;
    // Node* tail = fifth;

    Node* head = NULL; 
    Node* tail = NULL;

    // printAll(head);
    insertAtHead(head, tail, 60);
    // insertAtHead(head, tail, 50);
    printAll(head);
    // insertAttail(head, tail, 80);
    // printAll(head);

    insertInPosition(head, tail, 1, -1);
    printAll(head);
    return 0;
}