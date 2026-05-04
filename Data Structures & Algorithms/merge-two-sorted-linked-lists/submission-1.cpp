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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> arr;
        while(list1!=nullptr){
            arr.push_back(list1->val);
            list1=list1->next;
        }
        while(list2!=nullptr){
            arr.push_back(list2->val);
            list2=list2->next;
        }

        sort(arr.begin(),arr.end());
        ListNode * head=nullptr;
        ListNode * temp=nullptr;
        int i=0;
        while(i<arr.size()){
            ListNode * newnode=new ListNode(arr[i]);
            if(head==nullptr){
                newnode->next=nullptr;
                temp=head=newnode;
                cout<<newnode->val<<" ";
            }else{
                temp->next=newnode;
                newnode->next=nullptr;
                temp=newnode;
                cout<<newnode->val<<" ";
            }
            i++;
        }
        return head;
    }
};
