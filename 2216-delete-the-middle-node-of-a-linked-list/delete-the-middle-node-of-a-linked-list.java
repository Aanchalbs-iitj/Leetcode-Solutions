/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode deleteMiddle(ListNode head) {
        if (head==null || head.next==null) return null; //single element
        ListNode fast=head;
        ListNode slow=head;
        fast=fast.next.next;//skipping a slow traversal
        while(fast!=null && fast.next!=null){
            fast=fast.next.next;
            slow=slow.next;
        }
        //slow now points to the previous of middle node
        slow.next=slow.next.next;
        return head;
    }
};
