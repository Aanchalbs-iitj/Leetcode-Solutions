/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head==NULL || head->next==NULL) return false;//to reduce time complexity
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast!=NULL && fast->next!=NULL){//condition for linear LL
            slow=slow->next;
            fast=fast->next->next;
            if (slow==fast) return true;
        }
        return false;
    }
};