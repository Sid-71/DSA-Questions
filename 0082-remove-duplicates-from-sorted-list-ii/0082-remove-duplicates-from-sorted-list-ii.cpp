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
    ListNode* deleteDuplicates(ListNode* head) {
        
     ListNode*newNode = new ListNode(-1);
        newNode->next = head;
    ListNode*prev = newNode;
        ListNode*curr = head;
    while(curr!= NULL)
    {
      if(curr->next!= NULL and curr->val == curr->next->val)
      {
       while(curr->next!= NULL and curr->val == curr->next->val)
       {
           curr = curr->next;
       }
        prev->next = curr->next;
      }
        else {
            if(prev->next!= NULL)
            {
            prev = prev->next;                
            }
        }
        curr = curr->next;
    }
        
    return newNode->next;
        
    }
};