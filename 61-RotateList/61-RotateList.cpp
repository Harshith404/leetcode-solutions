// Last updated: 4/3/2026, 7:39:06 PM
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
    using Node = ListNode;
    //#define NULL null//dont work
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr)
            return nullptr;
    
    Node* last=head;
    int n=1;
    while(last->next!=nullptr)
    {
        n++;
        last=last->next;
    }
    k=k%n;
    if(k==0)
        return head;

    int count=1;
    Node* t=head;
    while(t!=nullptr)
    {
        if(count==(n-k))
            break;
        count++;
        t=t->next;
    }
    last->next=head;
    Node*res=t->next;
    t->next=nullptr;
    return res;
    }
};