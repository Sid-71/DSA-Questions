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
    int len(ListNode*head)
    {
       int cnt =1;
        ListNode*curr = head;
       while(curr->next !=NULL)
       {
           curr = curr->next;
           cnt++;
       }
        return cnt;
     }
    

    ListNode* rotateRight(ListNode* head, int k) {
       if(head == NULL or head->next == NULL)return head;
        
        int l = len(head);
        k%=l;
        if(k ==0)
        {
          return head;
        }
        int z = l-k;
        int cnt = 1;
        ListNode*curr = head;
        while(cnt<z)
        {
            curr = curr->next;
           cnt++;
         }
         ListNode*head2 = curr;
         while(curr->next != NULL)
          {
            curr = curr->next;
          }
      curr->next = head;
      head = head2->next;
      head2->next = nullptr;
      return head;

    } 

};