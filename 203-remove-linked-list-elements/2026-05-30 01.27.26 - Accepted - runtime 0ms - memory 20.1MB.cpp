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
    ListNode* removeElements(ListNode* head, int val) {
        if (head==NULL) return head;//empty linked list
        if (head->val==val){
            ListNode* temp= head;
            head=head->next;
            delete temp;
            return removeElements(head,val);
        }
        ListNode* temp=head->next;
        ListNode* prev=head;
        while(temp){
            if(temp->val==val){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
            prev=temp;
            temp=temp->next;
        }
        }
        return head;
    }
};