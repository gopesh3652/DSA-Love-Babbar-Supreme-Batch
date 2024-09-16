// recursive approach
class Solution {
    public:

    ListNode* reverseUsingrecursion(ListNode* prev, ListNode* curr) {
        if (curr == NULL) return prev;

        ListNode* next = curr->next;
        curr->next = prev;

        ListNode* ans = reverseUsingrecursion(curr, next);
        return ans;
    }

    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        return reverseUsingrecursion(prev, curr);
    }
};

// Iterative approach
class Solution {
    public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
        return head;
    }
};

// #include<iostream>
// using namespace std;

// class Node {
//     public:
//     int data;
//     Node* next;

//     Node() {
//         this->next = NULL;
//     }

//     Node(int data) {
//         this->data = data;
//         this->next = NULL;
//     }

//     ~Node() { cout << "Node deleted with data: " << this->data << endl; }
// };

// int main() {

//     return 0;
// }