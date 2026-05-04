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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int res=0;
        ListNode * tmp=nullptr;
        ListNode * head=nullptr;
        while(l1!=nullptr || l2!=nullptr || res>0){
            
            int sum=res;
           if(l1!=nullptr){
            sum+=l1->val;
            l1=l1->next;
           }
           if(l2!=nullptr){
            sum+=l2->val;
            l2=l2->next;
           }
           int rem=sum%10;
           res=sum/10;
           ListNode * newnode=new ListNode(rem);
           if(head==nullptr){
            head=tmp=newnode;
           }else{
            tmp->next=newnode;
            tmp=newnode;
           }

        }
        return head;
    }
};
