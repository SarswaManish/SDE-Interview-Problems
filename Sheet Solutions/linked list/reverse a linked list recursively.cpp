
https://leetcode.com/problems/reverse-linked-list/


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
    ListNode *newnode=NULL;
    void reverse(ListNode *head,ListNode *par)
    {
        
        if(head==NULL)
        {
            if(newnode==NULL)
                newnode=par;
            return;
        }
        
        reverse(head->next,head);
        head->next=par;
        //cout<<head->val<<" "<<par->val<<endl;
      
        
       
    }
    
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return NULL;
       // ListNode *newnode=NULL;
        reverse(head,NULL);
        return newnode;
    }
};
