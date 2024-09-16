class Solution {
    public:
    bool hasCycle(ListNode* head) {
        // map<ListNode*, bool> table;
        // ListNode* temp = head;

        // while(temp != NULL) {
        //     if(table[temp] == false) table[temp] = true;
        //     else return true;
        //     temp = temp->next;
        // }
        // return false;

        // if(head== NULL || head->next == NULL) return false;

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            if (slow == fast) return true;
            else {
                fast = fast->next->next;
                slow = slow->next;
            }
        }
        return false;
    }
};