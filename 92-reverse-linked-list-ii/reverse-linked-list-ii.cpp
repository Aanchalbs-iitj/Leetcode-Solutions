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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(! head || left==right) return head;
        ListNode dummy(0);
        dummy.next=head;
        ListNode* prev=&dummy;
       for(int i=1;i<left;i++){
        prev=prev->next;
       }
        ListNode* curr=prev->next;
        ListNode* revPrev=nullptr;//to make the reverse nodes last point to null
        int k=right-left+1;
        while(k--){
            ListNode* nextNode=curr->next;
            curr->next=revPrev;
            revPrev=curr;
            curr=nextNode;
        }
        ListNode* leftNode=prev->next;
        prev->next=revPrev;
        leftNode->next=curr;
        return dummy.next;
    }
};