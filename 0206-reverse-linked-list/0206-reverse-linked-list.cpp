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
    ListNode* reverseList(ListNode* head) {
        ListNode*curr = head;
        ListNode*prep = NULL;
            ListNode*link = NULL;
       while(curr != NULL)
       {
           link = curr->next;
           curr->next = prep;
           prep = curr;
           curr = link;
       }
       head = prep; 
    return head;
    }
};