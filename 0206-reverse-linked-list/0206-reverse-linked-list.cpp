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
    ListNode* reverseList(ListNode* head) {
        ListNode* n=head;
        ListNode* prev=nullptr;
        ListNode* nex=nullptr;
        if(head==nullptr){
            return head;
        }
        while(n!=nullptr){
            nex=n->next;
            n->next=prev;
            prev=n;
            n=nex;
        }
        head=prev;
        return head;
    }
    void push(ListNode* head,int data){
        ListNode* n=head;
        n->val=data;
        ListNode* temp=head;
        if(head==nullptr){
            head=n;
            return;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=n;

    }
    void display(ListNode* head){
        if(head==nullptr){
            return;
        }
        while(head!=nullptr){
            cout<<head->val<<',';
            head=head->next;
        }
    }
};
