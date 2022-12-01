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
        int l=0;
      for(ListNode*curr = head; curr!= NULL; curr = curr->next)
      {
          l++;
      }
        return l;
    }
    ListNode*helper(ListNode* l1,int x, ListNode* l2,int y)
    {
        int ans =0;
        int carry =0;
       ListNode*c1 = l1;
        ListNode*c2 = l2;
        while(c1!= NULL or c2!= NULL)
        {
            int d2 = ((c2 == NULL)?0:c2->val);
            int d1 = c1->val;
            int sum = d1+d2 + carry;
            c1->val = sum%10;
            carry = sum/10;
            if(c1->next == NULL)
            {
              break;
            }
            if(c1->next != NULL)
            {
                c1 = c1->next;
            }
           if(c2 == NULL)
           {
               continue;
           }
            c2 = c2->next;
            
        }
        if(carry)
        {
            ListNode*newNode = new ListNode(carry);
            c1->next = newNode;
        }
        return l1;
        
    }
    
    
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int le1 = len(l1);
        int le2 = len(l2);
      if(le1 > le2)
      {
          return helper(l1,le1,l2,le2);
      }
        else {
            return helper(l2,le2,l1,le1);
        }
    }
};