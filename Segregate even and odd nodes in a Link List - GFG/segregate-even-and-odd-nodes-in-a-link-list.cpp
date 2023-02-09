//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
void printList(Node* node) 
{ 
    while (node != NULL) { 
        cout << node->data <<" "; 
        node = node->next; 
    }  
    cout<<"\n";
} 


// } Driver Code Ends
//User function template for C++

/*
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        
         Node*oh = NULL;
     Node*eh = NULL;
     Node*nho = NULL;
     Node*nhe = NULL;
        if(head == NULL or head->next == NULL)return head;
        
        for(Node*curr = head; curr!= NULL; curr=curr->next)
        {
          int data = curr->data;
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
         }
         if(eh == NULL)
         {
             oh->next = NULL;
             return nho;
         }
         if(oh == NULL)
         {
             eh->next = NULL;
             return nhe;
         }
        oh->next = NULL;
         eh->next = nho;
         return nhe;
    }
};

//{ Driver Code Starts.

int main() {
    //code
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int data;
        cin>>data;
        struct Node *head = new Node(data);
        struct Node *tail = head;
        for (int i = 0; i < N-1; ++i)
        {
            cin>>data;
            tail->next = new Node(data);
            tail = tail->next;
        }
        
        Solution ob;
        Node *ans = ob.divide(N, head);
        printList(ans); 
    }
    return 0;
}

// } Driver Code Ends