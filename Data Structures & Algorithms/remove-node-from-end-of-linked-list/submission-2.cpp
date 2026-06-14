class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* counter = head;
        int i = 0;

        while (counter != nullptr) {
            i++;
            counter = counter->next;
        }

        // remove the head
        if (n == i) {
            return head->next;
        }

        int j = 0;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (j == i - n - 1) {
                break;
            }
            curr = curr->next;
            j++;
        }

        curr->next = curr->next->next;
        return head;
    }
};