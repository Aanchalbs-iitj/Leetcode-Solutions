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
    ListNode* oddEvenList(ListNode* head) {
        if (head==NULL || head->next==NULL) return head;
        ListNode dummy1(-1);//odd
        ListNode* curr1=&dummy1;
        ListNode dummy2(-1);//even
        ListNode* curr2=&dummy2;
        int cnt=0;
        while(head!=NULL){
            cnt++;
            if (cnt & 1){
                curr1->next=head;
                curr1=head;
            }
            else {
                curr2->next=head;
                curr2=head;
            }
            head=head->next;
        }
        curr2->next=nullptr;
        curr1->next=dummy2.next;
        return dummy1.next;
    }
};