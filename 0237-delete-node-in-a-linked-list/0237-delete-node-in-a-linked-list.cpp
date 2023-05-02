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
    void deleteNode(ListNode* curNode) {
      curNode->val = curNode->next->val;
        curNode->next = curNode->next->next;
        
    }
};