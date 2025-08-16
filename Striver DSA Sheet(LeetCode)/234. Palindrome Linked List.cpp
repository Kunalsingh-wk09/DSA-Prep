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

private:
ListNode* getmid(ListNode*head){
    ListNode*slow=head;
    ListNode*fast=head;
    ;
    while(fast!=NULL&&fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}
   ListNode* reverseList(ListNode* head) {
        ListNode*prev=NULL;
        ListNode*curr=head;
        ListNode*next=NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
    return prev;}


public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL) return true;
        ListNode*mid=getmid(head);
        mid=reverseList(mid);
        ListNode*t1=head;
        ListNode*t2=mid;
        while(t2!=NULL){
            if(t1->val!=t2->val) return false;

            t1=t1->next;
            t2=t2->next;
        }
    return true;}
};