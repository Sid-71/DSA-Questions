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
    ListNode* removeElements(ListNode* head, int val) {
         if(head == NULL)return NULL;
      ListNode*nHead = new ListNode(-1);
        nHead->next = head;
        ListNode*cur = nHead;
        while(cur)
        {
            if(cur->next != NULL and cur->next->val == val)
            {
                cur->next = cur->next->next;
            }
            else {
                cur = cur->next;
            }
        }
        return nHead->next;
    }
};