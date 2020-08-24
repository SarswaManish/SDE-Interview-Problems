https://leetcode.com/problems/add-two-numbers/



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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        if(l1==NULL && l2==NULL)
            return NULL;
        int carry=0;
        ListNode *head=NULL,*curr=NULL;
        while(l1!=NULL && l2!=NULL)
        {
            int sum=l1->val+l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            l1->val=sum;
            if(head==NULL)
            {
                
                head=l1;
                curr=l1;
                
                
            }
            else
            {
                curr->next=l1;
                curr=curr->next;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            int sum=l1->val+carry;
            carry=sum/10;
            sum=sum%10;
            l1->val=sum;
            if(head==NULL)
            {
                head=l1;
                curr=l1;
            }
            else
            {
                curr->next=l1;
                curr=curr->next;
            }
            l1=l1->next;
        }
        
        while(l2!=NULL)
        {
            int sum=l2->val+carry;
            carry=sum/10;
            sum=sum%10;
            l2->val=sum;
            if(head==NULL)
            {
                head=l2;
                curr=l2;
            }
            else
            {
                curr->next=l2;
                curr=curr->next;
            }
            l2=l2->next;
            
        }
        if(carry>0)
        {
            ListNode *newnode=new ListNode(carry);
            newnode->next=NULL;
            curr->next=newnode;
            
        }
        return head;
    }
};
