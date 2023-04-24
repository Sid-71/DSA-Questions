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
    
    
    ListNode* solve(ListNode*a,ListNode*b)
    {
        if(a == NULL)return b;
        if(b == NULL)return a;
        
        if(a->val < b->val)
        {
            a->next = solve(a->next,b);
            return a;
        } 
       b->next = solve(a,b->next);
       return b;
        
    }
    
    ListNode* mergeTwoLists(ListNode* a, ListNode* b) {
        
        
        return solve(a,b);
    }
};