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
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        if(!a and !b)return NULL;
        if(!a)return b;
        if(!b)return a;
        
        ListNode*aa= a;
        ListNode*bb = b;
        ListNode*curr = new ListNode(-1);
        ListNode*mh = curr;
        
        while(aa and bb)
        {
            if(aa->val < bb->val)
            {
                curr->next = aa;
                curr = curr->next;
                aa = aa->next;
            }
            else {
                curr->next = bb;
                curr = curr->next;
                bb = bb->next;
            }
        }
        if(aa)
        {
            curr->next = aa;
        }
        if(bb)
        {
            curr->next = bb;
        }
        return mh->next;
    }
};