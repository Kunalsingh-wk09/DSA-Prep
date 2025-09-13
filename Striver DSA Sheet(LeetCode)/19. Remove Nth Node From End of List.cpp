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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=head;
        int cnt=0;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        n=cnt-n;
        cnt=0;
        temp=head;
        if(n==0){
            head=temp->next;
            temp->next=NULL;
            delete temp;
            return head;
        }
        while(cnt<n-1){
            temp=temp->next;
            cnt++;
        }
        ListNode*t2=temp->next;
        temp->next=temp->next->next;
        t2->next=NULL;
        delete t2;
        
    
return head;}};