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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL) return NULL;
        ListNode* dummy1=new ListNode(-1);
        ListNode* dummy2=new ListNode(-1);
        ListNode* curr1=dummy1;
        ListNode* curr2=dummy2;
        // ListNode* temp=head;
        while(head){
            ListNode* nextNode = head->next;
            if(head->val<x){
                curr1->next=head;
                curr1=head;
            }
            else {
                curr2->next=head;
                curr2=head;
            }
            head=nextNode;
        }
        curr2->next = nullptr; 
        curr1->next=dummy2->next;
        // ListNode* newhead=dummy1->next;
        // delete dummy1;
        // delete dummy2;
        return dummy1->next;
    }
};