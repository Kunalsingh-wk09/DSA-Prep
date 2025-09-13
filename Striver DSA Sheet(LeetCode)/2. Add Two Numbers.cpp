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
void attail(ListNode*temp,int digit){
    ListNode*t= new ListNode(digit);
    temp->next=t;
    t->next=NULL;
}

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int digit=0;
        int sum=0;
        int carry=0;
        ListNode*t1=l1;
        ListNode*t2=l2;
        ListNode*ans=new ListNode(-1);
        ListNode*temp=ans;
        while(t1||t2){
            int v1=0;
            int v2=0;
            if(t1)v1=t1->val;
            if(t2)v2=t2->val;
            
            sum=carry+v1+v2;
            digit=sum%10;
            carry=sum/10;
            attail(temp,digit);
            temp=temp->next;
            if(t1)t1=t1->next;
            if(t2)t2=t2->next;
        }
        if(carry==1)
        attail(temp,1);


       return ans->next; 
    }
};