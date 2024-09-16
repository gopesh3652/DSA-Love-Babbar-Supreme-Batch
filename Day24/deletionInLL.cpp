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

    ~Node() { cout << "Node deleted with data: " << this->data << endl; }
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

void deleteNode(Node*& head, Node*& tail, int position) { 
    int length = getLength(head);
    // empty linked list
    if (head == NULL || position > length || position < 1) {
        cout << "Invalid position or empty list." << endl;
        return;
    }

    // for single node
    if (head == tail) {
        // create a temp node
        Node* temp = head;
        // delete the node
        delete temp;
        // update head and tail with null
        head = tail = NULL;
        return;
    }

    // delete from head
    if (position == 1) {
        // delete first node
        // create a temp node which points to head
        Node* temp = head;
        // point head to the next position or isolate the node
        head = head->next;
        // make address part of temp as null
        temp->next = NULL;
        delete temp;
    }
    else if (position == length) {
        // delete last node
        // create a prev temp node
        Node* prev = head;
        // traverse till tail - 1
        while (prev->next != tail) prev = prev->next;
        // null the link of previous node
        prev->next = NULL;
        // delete the node
        delete tail;
        // update tail;
        tail = prev;

    }
    else {
        // delete node in middle
        // create two pointer prev and current
        Node* prev = NULL;
        Node* curr = head;

        // traverse to the position
        while (position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }
        // attach previous next to the next of current node
        prev->next = curr->next;
        // null the link of node to be deleted or isolate the node
        curr->next = NULL;
        // delete the node 
        delete curr;
    }
}

int main() {
    Node* first = new Node(3);
    Node* second = new Node(4);
    Node* third = new Node(5);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    Node* tail = fifth;

    // printAll(head);
    // insertAtHead(head, tail, 60);
    // printAll(head);
    // insertAttail(head, tail, 80);
    // printAll(head);

    // insertInPosition(head, tail, 1, -1);
    printAll(head);
    deleteNode(head, tail, 2);
    printAll(head);
    return 0;
}