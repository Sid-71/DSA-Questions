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
    ListNode *getIntersectionNode(ListNode *ha, ListNode *hb) {
        ListNode*sa = ha;
        ListNode*sb = hb;
        ListNode*ta = ha;
        ListNode*tb = hb;
        while(sa != sb)
        {
         if(sa == NULL)sa = tb;
         else sa = sa->next;
            if(sb == NULL)sb =ta;
            else sb = sb->next;
        }
        return sa;
    }
};