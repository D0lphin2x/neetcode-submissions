/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* counter = head;
        int i = 0;
        while (counter != nullptr) {
            i++;
            counter = counter->next;
        }
        if (n == i) {
            return head->next;
        }
        
        int j = 0;
        ListNode* curr = head;
        while (curr->next != nullptr) {
            if (i - n - 1 == j) {
                break;
            }
            curr = curr->next;
            j++;
        }
        curr->next = curr->next->next;
        return head;
    }
};
