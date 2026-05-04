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
    bool hasCycle(ListNode* head) {
        ListNode * temp=head;
        int i=0;
        while(temp->next!=nullptr && i<1000) {
            temp=temp->next;
            i++;
        }
        if(temp->next !=nullptr){
            return true;
        }else{
           return false;
        }
    }
};
