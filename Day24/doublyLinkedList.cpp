#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* prev;
    Node* next;

    Node() {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data) {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node() {
        cout << "Destructor called for:- " << this->data << endl;
    }
};

void printList(Node*& head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << endl;
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node*& head) {
    int length = 0;
    Node* temp = head;
    while (temp != NULL) {
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = tail = newNode;
    }
    else {
        Node* newNode = new Node(data);
        head->prev = newNode;
        newNode->next = head;
        head = newNode;
    }
}

void insertAtTail(Node*& head, Node*& tail, int data) {
    if (head == NULL) {
        Node* newNode = new Node(data);
        head = tail = newNode;
    }
    else {
        Node* newNode = new Node(data);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void insertAtMiddle(Node*& head, Node*& tail, int data, int position) {
    int length = getLength(head);

    // if (position <= 0 || position >= length + 1) {
    //     cout << "Invalid position" << endl;
    //     return;
    // }

    if (head == NULL || position == 1) {
        insertAtHead(head, tail, data);
        return;
    }
    else if (position == length + 1) {
        insertAtTail(head, tail, data);
        return;
    }
    else {
        Node* newNode = new Node(data);

        Node* prev = NULL;
        Node* curr = head;

        while (position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }
        prev->next = newNode;
        newNode->prev = prev;

        curr->prev = newNode;
        newNode->next = curr;
    }
}

void deletion(Node*& head, Node*& tail, int position) {
    int length = getLength(head);

    if (head == NULL || position > length || position < 1) {
        cout << "Invalid position or empty list" << endl;
        return;
    }

    if (head == tail) {
        Node* temp = head;
        head = tail = NULL;
        delete temp;
    }

    if (position == 1) {
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else if (position == length) {
        Node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        temp->prev = NULL;
        delete temp;
    }
    else {
        Node* prev = NULL;
        Node* curr = head;

        while (position != 1) {
            prev = curr;
            curr = curr->next;
            position--;
        }

        Node* next = curr->next;

        prev->next = next;
        curr->prev = NULL;
        next->prev = prev;
        curr->next = NULL;
        delete curr;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 10);
    insertAtTail(head, tail, 20);
    insertAtTail(head, tail, 30);
    insertAtTail(head, tail, 40);
    insertAtTail(head, tail, 50);

    insertAtMiddle(head, tail, 35, 6);

    printList(head);

    deletion(head, tail, 6);

    printList(head);

    return 0;
}