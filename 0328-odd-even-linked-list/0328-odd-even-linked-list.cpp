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
    ListNode* oddEvenList(ListNode* head) {
     ListNode*oh = NULL;
      ListNode*eh = NULL;
      ListNode*nho = NULL;
      ListNode*nhe = NULL;
        if(head == NULL or head->next == NULL)return head;
        int ind = 1;
        for(ListNode*curr = head; curr!= NULL; curr=curr->next)
        {
          int data = ind;
            if(data%2 != 0)
            {
                // first odd 
                if(oh == NULL)
                {
                    oh = curr;
                    nho = curr;
                }
                else {
                    oh->next = curr;
                    oh = curr;
                }
            }
            else {
                // first even
                if(eh == NULL)
                {
                    eh = curr;
                    nhe = curr;
                }
                else {
                    eh->next = curr;
                    eh = curr;
                }
            }
            ind++;
         }
        eh->next = NULL;
         oh->next = nhe;
         return nho;

    }
};