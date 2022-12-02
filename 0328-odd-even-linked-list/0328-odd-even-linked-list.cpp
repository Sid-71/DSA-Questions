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
        
       if(head == NULL or head->next == NULL) 
       {
           return head;
       }
       ListNode*first = head;
        ListNode*second = head->next;
        ListNode*shead = second;
        int turn =0;
        while(second != NULL and second->next != NULL)
        {
            if(turn == 0)
            {
                first->next = second->next;
            first = second->next;
            }
            else {
                second->next = first->next;
                second = first->next;
            }
            turn = 1-turn;
                      
        }
         if(second != NULL and second->next != NULL)
         {
             second->next = nullptr;
         }
        
        first->next  = shead;
        return head;
    }
};