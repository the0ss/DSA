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
    ListNode* reverse(ListNode* curr){
        ListNode* pre=nullptr,*nex=nullptr;
        while(curr){
            nex=curr->next;
            curr->next=pre;
            pre=curr;
            curr=nex;
        }
        return pre;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head) return true;
        ListNode* fast=head,*slow=head;
        while(fast->next&&fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        ListNode* newHead=head;
        while(slow){
            if(newHead->val!=slow->val) return false;
            newHead=newHead->next;
            slow=slow->next;
        }
        return true;
    }
};