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
     while(head!=NULL)
     {
       if(head->next!= NULL and head->val == head->next->val)
       {
           head->next = head->next->next;
       }
       else {
          break;
       }  
      }  
 for(ListNode*curr = head; curr!= NULL ; )
 {
     if(curr->next!= NULL and curr->val == curr->next->val)
     {
         curr->next = curr->next->next;
     }
     else {
         curr = curr->next;
     }
 }
    return head;    
    }
};