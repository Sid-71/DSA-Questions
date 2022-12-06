/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    int len(ListNode*head)
    {
        int cnt =1;
        for(ListNode*curr = head;curr->next!= NULL;curr = curr->next)
        {
            cnt++;
        }
        return cnt;
    }
    ListNode* helper(ListNode*h1,int n1,ListNode*h2, int n2)
    {
        int diff = n1-n2;
        int cnt =0;
        ListNode*curr = h1;
        for(; cnt!=diff and curr!=NULL ; curr = curr->next)
        {
            cnt++;
        }
        ListNode*curr2 = h2;
        while(curr2!= NULL and curr!= NULL)
        {
            if(curr2 == curr)
            {
                return curr;
            }
            curr = curr->next;
            curr2=curr2->next;
        }
        return curr;
        
    }
    
    ListNode *getIntersectionNode(ListNode *heada, ListNode *headb) {
        int l1 = len(heada);
        int l2 = len(headb);
        if(l1>l2)
        {
            return helper(heada,l1,headb,l2);
        }
        else {
            return helper(headb,l2,heada,l1);
        }
    }
};