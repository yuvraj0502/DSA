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
    ListNode* reverseList(ListNode* head){
         ListNode* prev=NULL;
         while(head){
            ListNode* curr=head->next;
            head->next=prev;
            prev=head;
            head=curr;
         }
         return prev;
    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);

        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        int carry=0;

        while(l1 || l2 || carry){
            int total=carry;
            if(l1){
                total+=l1->val;
                l1=l1->next;
            }
            if(l2){
                total+=l2->val;
                l2=l2->next;
            }
            carry=total/10;
            temp->next=new ListNode(total%10);
            temp=temp->next;
        }
        return reverseList(dummy->next);
    }
};