#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>
#define vpii vector<pii>
#define all(a) a.begin(), a.end()
#define endl "\n"
#define pb push_back
#define F first
#define S second
typedef long long ll;

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
ListNode*reverse(ListNode*head,int right,ListNode*curr2)
{
     ListNode*link = NULL;
     if(curr2->next != NULL)
     {
      link = curr2->next;
     }
     curr2->next = NULL; 
     ListNode*tail = head;

    // reverse code
    ListNode*c = head;
    ListNode*prep = NULL;
    while(c!= NULL)
    {
      ListNode*l = c->next;
      c->next = prep;
      prep = c;
      c  = l;
    }
    head = prep;
    if(tail!= NULL )
    {
    tail->next = link;
    }

   return head;

}
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if(left == right or head == NULL or head->next == NULL)
      {
        return head;
      }
      ListNode*newNode = new ListNode(-1);
      newNode->next = head;
      ListNode*curr = newNode;
     int cnt =1;
     while(cnt != left and curr!=NULL)
     {
        curr = curr->next;
        cnt++;
     }   
     ListNode*curr2 = head;
     cnt = 1;
     while(curr2!= NULL and cnt!= right)
     {
        cnt++;
        curr2 = curr2->next;
     }

      ListNode*temp = reverse(curr->next,right,curr2);
      curr->next = temp;
      return newNode->next;
    }
};