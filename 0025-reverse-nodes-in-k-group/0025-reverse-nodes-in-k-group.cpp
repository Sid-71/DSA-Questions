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

   ListNode* helper(ListNode*head,int k)
   {
    if(head == NULL or head->next == NULL)return head;
    int cnt =1;
    ListNode*curr = head;
    ListNode*s = head;
    while(cnt!= k and curr->next!= NULL )
    {
      cnt++;
      curr = curr->next;
    }
       if(cnt!= k)
       {
           return head;
       }
    ListNode*f  = curr;
    ListNode*nhead = helper(curr->next,k);
    curr = s;
    ListNode*prev = NULL;
    while(curr!= f)
    {
      ListNode*link = curr->next;
      curr->next = prev;
      prev = curr;
      curr = link;
    }
    curr->next = prev;
    s->next = nhead;
    return f;
   }

    ListNode* reverseKGroup(ListNode* head, int k) {
        return helper(head,k);
    }
};