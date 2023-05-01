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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL or !head->next or k==0)return head;
        int len= 1;
        ListNode*cur = head;
        while(cur->next )
        {
            len++;
            cur = cur->next;
        }
        
        k%= len;
        if(k ==0)return head;
        k = len-k;
        
        ListNode*c2 = head;
        while(k >1)
        {
            k--;
            c2 = c2->next;
        }
        ListNode*ne = c2->next;
        c2->next = NULL;
        cur->next = head;
        head = ne;
        return head;
        
    }
};