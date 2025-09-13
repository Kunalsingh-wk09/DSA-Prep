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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int cnt=0;
        while(temp){
            temp=temp->next;
            cnt++;
        }
        if(cnt==1)return NULL;
        cnt=cnt/2;
        ListNode* prev=head;
        temp=head->next;
        while(cnt>1){
             cnt--;
            temp=temp->next;
            prev=prev->next;
           
        }
        prev->next=temp->next;
        temp->next=NULL;
        delete temp;
        
    return head;}
};