
https://leetcode.com/problems/merge-two-sorted-lists/



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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *newl=NULL;
        ListNode *temp=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            if(l1->val>l2->val)
            {
                if(newl==NULL)
                {
                    newl=l2;
                    temp=l2;
                  
                }
                else
                {
                    temp->next=l2;
                    temp=temp->next;
                    
                }
            
                l2=l2->next;
            }
            else
            {
                if(newl==NULL)
                {
                    newl=l1;
                    temp=l1;
                    
                }
                else
                {
                    temp->next=l1;
                    temp=temp->next;
                }
                l1=l1->next;
            }
        }
        while(l1!=NULL)
        {
            if(newl==NULL)
            {
                newl=l1;
                temp=l1;
                
            }
            else
            {
                temp->next=l1;
                temp=temp->next;
            }
            l1=l1->next;
        }
        while(l2!=NULL)
        {
            if(newl==NULL)
            {
                newl=l2;
                temp=l2;
            }
            else
            {
                temp->next=l2;
                temp=temp->next;
            }
            l2=l2->next;
        }
        
        
        return newl;
    }
};
