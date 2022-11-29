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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
     ListNode*curr = head;
        int cnt =1;
        while(cnt != n)
        {
            curr = curr->next;
            cnt++;
        }
        ListNode*c = new ListNode(-1);
        
        c->next = head;
        ListNode*b = c;
        while(curr->next != NULL){
           b = b->next;
           curr = curr->next;
         }
        b->next = b->next->next;
        return c->next;
        }
};