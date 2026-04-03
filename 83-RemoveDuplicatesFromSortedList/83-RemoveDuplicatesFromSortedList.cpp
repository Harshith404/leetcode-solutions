// Last updated: 4/3/2026, 7:39:00 PM
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
    ListNode* deleteDuplicates(ListNode* head) { if(head==NULL)
        {
            return head;
        }
        ListNode* officer = head;
        ListNode* cm = head->next;
        while(cm!=NULL)
        {
            if(cm->val==officer->val)
            {
                cm=cm->next;
                continue;
            }
            officer->next=cm;
            officer=officer->next;
             cm=cm->next;

        }
        officer->next=NULL;
        return head;
    }
};