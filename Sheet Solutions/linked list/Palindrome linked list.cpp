https://leetcode.com/problems/palindrome-linked-list/


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
    int flag=0;
    ListNode *l2=NULL;
    void checker(ListNode *l1)
    {
        if(l1->next==NULL)
        {
            if(l1->val!=l2->val)
            {
                flag=1;
             
            }
            l2=l2->next;
            return;
        }
        //cout<<l1->val<<" "<<l2->val<<endl;
        checker(l1->next);
        if(l1->val!=l2->val)
        {
            flag=1;
        }
        l2=l2->next;
        return;
    }
        
    bool isPalindrome(ListNode* head) {
        
        if(head==NULL)
            return true;
        l2=head;
        checker(head);
        
     if(flag)
         return false;
    else
        return true;
    }
};
