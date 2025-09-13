/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*temp=headA;
        int cnt1=0;
        while(temp){
            temp=temp->next;
            cnt1++;
        }
        temp=headB;
        int cnt2=0;
        while(temp){
            temp=temp->next;
            cnt2++;
        }
        int cnt= abs(cnt1-cnt2);
        ListNode*nheadA=headA;
        ListNode*nheadB=headB;
        if(cnt1>cnt2){
            while(cnt>0){
                cnt--;
                nheadA=nheadA->next;
            }
        }
        else {
            while(cnt>0){
                cnt--;
                nheadB=nheadB->next;
            }}
        while(nheadA!=nheadB){
            nheadA=nheadA->next;
            nheadB=nheadB->next;

        }

    return nheadA;}
};