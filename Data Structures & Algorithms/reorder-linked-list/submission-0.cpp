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
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr);
        ListNode* dum = head;
        int linkLength = 0;
        while (dum!= nullptr) {
            linkLength++;
            dum = dum->next;
        }
        int split = linkLength / 2;
        ListNode* firstHalfEnd = head;
        for (int i = 0; i < split; i++) {
            firstHalfEnd = firstHalfEnd->next;
        }
        ListNode* secondHalf = firstHalfEnd->next;
        firstHalfEnd->next = nullptr;
        // reverse the secondHalf linked list
        ListNode* prev = nullptr;
        ListNode* curr = secondHalf;
        while (curr != nullptr) {
            ListNode* fut = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fut;
        }
        secondHalf = prev;
        ListNode* firstHalf = head;

        while (secondHalf != nullptr) {
            ListNode* temp1 = firstHalf->next;
            ListNode* temp2 = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = temp1;
            
            firstHalf = temp1;
            secondHalf = temp2;
        }
    }
};
