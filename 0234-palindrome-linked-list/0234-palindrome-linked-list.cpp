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
    ListNode*reverse(ListNode*head)
    {
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
    bool isPalindrome(ListNode* head) {
        ListNode*slow = head;
        ListNode*fast = head->next;
        if(head == NULL or head->next == NULL)
        {
            return 1;
        }
        if(head->next->next == NULL)
        {
            return (head->val == head->next->val);
        }
        while(fast!= NULL and fast->next!= NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
      ListNode*curr3 = reverse(slow->next);
        slow->next = curr3;
     
        ListNode*curr = slow->next;
        ListNode*det = head;
        while(curr != NULL)
        {
            if(curr->val != det->val)return false;
            curr = curr->next;
            det = det->next;
        }
        return true;
    }
};