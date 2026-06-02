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
        if (head == nullptr) return nullptr;
        if (head->next==NULL && n==1) return NULL;
        ListNode* temp=head;
        int sz=0;
        while(temp!=NULL){
            sz++;
            temp=temp->next;
        }
        if (n==sz){//delete head
            ListNode* del = head;
            head=head->next;
            delete del;
            return head;
        }
        ListNode* temp2=head;
        for(int i=1;i<(sz-n);i++){
            temp2=temp2->next;
        }
        ListNode* del = temp2->next;
        temp2->next=del->next;
        delete del;

        return head;
    }
};