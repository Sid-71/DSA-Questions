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
    ListNode* removeElements(ListNode* head, int x) {
    
        
        while(head!= NULL and head->val == x)
        {
            if(head->next == NULL)
            {
                head = NULL;
                return head;
            }
            head = head->next;
        }
        ListNode*curr = head;
      
        
        while(curr != NULL) 
       {
           if(curr->next != NULL and curr->next->val == x)
           {
               if(curr->next->next != NULL)
               { 
               curr->next = curr->next->next;               
               }
              else {
                  curr->next = NULL;
              }
           }
          else if(curr->val == x)
          {
              
          }
           else {
           curr = curr->next; 
           }
        }
        
        return head;
    }
};