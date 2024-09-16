// finding length than finding mid and iterating to it
class Solution {
    public:
    int listLength(ListNode* head) {
        int length = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            length++;
            temp = temp->next;
        }
        return length;
    }
    ListNode* middleNode(ListNode* head) {
        int length = listLength(head);
        int n = (length / 2) + 1;

        ListNode* temp = head;

        while (n != 1) {
            n--;
            temp = temp->next;
        }
        return temp;
    }
};

// Tortoise or slow-fast algo
class Solution {
    public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL) {
            fast = fast->next;
            if (fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
        }
        return slow;
    }

};