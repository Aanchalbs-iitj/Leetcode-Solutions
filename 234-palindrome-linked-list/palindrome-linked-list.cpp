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
    bool isPalindrome(ListNode* head) {
        if ( head->next==NULL) return true;
        stack<int> st;
        ListNode* temp= head;
        while(temp){
            st.push(temp->val);
            temp=temp->next;
        }
        ListNode* tempp= head;
        while(tempp){
            if(st.top()!=tempp->val) return false;
            st.pop();
            tempp=tempp->next;
        }
        return true;
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // while(curr!=NULL){
        //     ListNode* front=curr->next;
        //     curr->next=prev;
        //     prev=curr;
        //     curr=front;
        // }
    }
};