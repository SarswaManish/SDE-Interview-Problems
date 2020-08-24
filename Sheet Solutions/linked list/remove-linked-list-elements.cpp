https://leetcode.com/problems/remove-linked-list-elements/


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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        if(head->val==val)
            head=head->next;
        ListNode *curr=head,*prev=head;
        while(curr!=NULL)
        {
            if(curr->val==val && head->val==val)
            {
                head=head->next;
                curr=curr->next;
            }
            else if(curr->val==val)
            {
                prev->next=curr->next;
                curr=curr->next;
            }
            else
            {
                prev=curr;
                curr=curr->next;
            }
        }
        return head;
    }
};
