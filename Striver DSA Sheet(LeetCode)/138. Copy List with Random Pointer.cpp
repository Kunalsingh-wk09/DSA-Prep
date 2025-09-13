/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
void attail(Node*&head,Node*&tail,int val){
    Node*temp= new Node(val);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
    tail->next=temp;
    tail=temp;}
}
    Node* copyRandomList(Node* head) {
       Node*chead=NULL;
       Node*ctail=NULL;
       Node*temp=head;
        while(temp!=NULL){
            attail(chead,ctail,temp->val);
            temp=temp->next;
        }
        unordered_map<Node*,Node*> mapp;
        temp=head;
        Node*t2=chead;
        while(temp!=NULL){
            mapp[temp]=t2;
            temp=temp->next;
            t2=t2->next;
        }
        temp=head;
        t2=chead;
        while(temp!=NULL){
            t2->random=mapp[temp->random];
            temp=temp->next;
            t2=t2->next;
        }

    return chead;}
};