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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL or head->next == NULL)
        {
            return head;
        }
        
        ListNode*s = head;
        ListNode*temp = head->next;
         ListNode*fast = head->next->next;
        temp->next = s;
        head = temp;
     while(fast!= NULL and fast->next != NULL)
     {
      s->next = fast->next;
      s = s->next;
      ListNode*link = NULL;
         if(s->next != NULL)
         {
             link = s->next;
         }
      s->next = fast;
      s = fast;
         fast = link;
     }
   if(fast == NULL)
    {
        s->next = NULL;
    }
    else  if(s!= NULL and fast!= NULL and fast->next == NULL)
     {
      s->next = fast;
     }
   
     return head;
    }
};