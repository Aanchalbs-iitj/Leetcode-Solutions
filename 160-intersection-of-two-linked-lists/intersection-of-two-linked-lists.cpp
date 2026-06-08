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
        ListNode* t2=headB;
        while(t1!=t2){//initial check if the headA is not equal to headB
            t1=t1->next;
            t2=t2->next;

            if (t1==t2) return t1;

            if (t1==NULL) t1=headB;
            if (t2==NULL) t2=headA;
        }
        return t1;//if there is same linkedlist headA and headB will collide
    }
};