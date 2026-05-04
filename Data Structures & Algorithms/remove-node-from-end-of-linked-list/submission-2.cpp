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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *tmp=head;
        int sizee=0;
        while(tmp!=nullptr){
            sizee++;
            tmp=tmp->next;
        }
       
        if(n==sizee){
            ListNode *tmp3=head->next;
            delete(head);
            return tmp3;
        }
        ListNode *tmp2=head;
        int nth=sizee-n;
        int i=0;
        while(i<nth-1){
            tmp2=tmp2->next;
            i++;
        }
        ListNode * k=tmp2->next;
        tmp2->next=k->next;
        delete(k);
        return head;
    }
};
