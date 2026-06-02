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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // if (list1==NULL && list2==NULL) return NULL;
        // if (list1==NULL && list2!=NULL) return list2;
        // if (list2==NULL && list1!=NULL) return list1;
        // ListNode* temp1=list1;
        // ListNode* temp2=list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* curr=dummy;
        // while(list1!=NULL || list2!=NULL){
            while (list1!= NULL && list2!=NULL){
                if (list1->val<=list2->val){
                // ListNode* newNode=new ListNode(temp1->val);
                curr->next=list1;
                list1=list1->next;
            }
                else {
                // ListNode* newNode=new ListNode(temp2->val);
                curr->next=list2;
                // curr=curr->next;
                list2=list2->next;
            }
            curr=curr->next;
         }
        //dono mein se koi ek list end ho jaegi
                // if (temp1) {
                // // ListNode* newNode=new ListNode(temp1->val);
                // curr->next=temp1;
                // curr=curr->next;
                // temp1=temp1->next;
                // }
                // else {
                // // ListNode* newNode=new ListNode(temp2->val);
                // curr->next=temp2;
                // curr=curr->next;
                // temp2=temp2->next;
                // }
            curr->next=(list1)? list1 :list2;

        ListNode* head= dummy->next;
        delete dummy;
        return head;
    }
};