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
    ListNode* doubleIt(ListNode* head) {
        long long number=0;
        ListNode* temp=head;

        while(temp!=NULL){
            number=number*10+temp->val;
            temp=temp->next;
        }
        number*=2;
        if(number==0){
            return new ListNode(0);
        }
        ListNode* newHead=NULL;
        ListNode* tail=NULL;
        string strNumber=to_string(number);
        for(char i:strNumber){
            ListNode* newNode=new ListNode(i-'0');
            if(!newHead){
                newHead=newNode;
                tail=newNode;
            }else{
                tail->next=newNode;
                tail=tail->next;
            }
        }
        return newHead;
    }
};