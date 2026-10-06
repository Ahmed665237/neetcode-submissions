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
        if(!head||head->next==nullptr)
            return head;
        ListNode*p=head;
        ListNode*t=head->next;
        ListNode*k=t;
        while(t!=nullptr){
            k=k->next;
            t->next=p;
            p=t;
            t=k;
        }
        head->next=nullptr;
        head=p;
        return head;
    }
};
