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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA==NULL || headB==NULL) return NULL;// agar koi ek linkedlist empty hai toh there can be no collision point
        ListNode* t1=headA;
        while(t1->next!=NULL){
            t1=t1->next;
        }
        //now t1 is at the tail
        t1->next=headB;
        ListNode* t3=headA;//slow
        ListNode* t2=headA;//fast
        while(t2!=NULL && t2->next!=NULL){//initial check if the headA is not equal to headB
            t3=t3->next;
            t2=t2->next->next;

            if (t3==t2){
                t3=headA;
                while(t3!=t2){
                    t3=t3->next;
                    t2=t2->next;
                }
                t1->next=NULL;
                return t3;
            };

        }
        t1->next=NULL;
        return NULL;//if there is same linkedlist headA and headB will collide
    }
};