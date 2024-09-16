class Solution {
    public:
    void removeLoop(Node* head) {
        Node* slow = head;
        Node* fast = head;

        while (fast != NULL) {

            fast = fast->next;

            if (fast != NULL) {
                fast = fast->next;
                slow = slow->next;
            }
            if (fast == slow) break;
        }

        if (fast == NULL || fast->next == NULL) return;

        slow = head;

        while (fast != slow) {
            fast = fast->next;
            slow = slow->next;
        }

        while (slow->next != fast) slow = slow->next;

        slow->next = NULL;
    }
};