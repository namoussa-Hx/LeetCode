/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head)
 {
    struct ListNode *curr = head;
   register int  count = 0;
   register int midle = 0;
    while(curr != NULL)
    {
        count++;
    curr = curr->next;
    }
    midle = count / 2;
    register int i = 0;
    curr = head;
    while(i < midle)
    {
      i++;
    curr = curr->next;
    }
    head = curr;
 return head;
}