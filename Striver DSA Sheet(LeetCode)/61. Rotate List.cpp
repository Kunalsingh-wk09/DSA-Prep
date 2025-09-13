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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head||!head->next)return head;
        if(k==0)return head;
        ListNode*tail=head;
        ListNode*prev=head;
        int n=1;
        while(tail->next!=NULL){
            prev=tail;
            tail=tail->next;
            n++;
            
        }
        k=k%n;
        if(k==0)return head;
        
        tail->next=head;
        prev->next=NULL;
        head=tail;
        tail=prev;
        
        return rotateRight(head,k-1);  
    }
};