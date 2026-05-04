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
        ListNode * temp=head;
        ListNode *newNode=new ListNode();
        ListNode * tmp2=nullptr;
        while(temp!=nullptr){
            ListNode *newNode=new ListNode(temp->val);
            newNode->next=tmp2;
            tmp2=head=newNode;
            temp=temp->next;
        }
        return head;
    }
};
