/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lengthA=0;
        int lengthB=0;

        ListNode* tempA=headA;
        ListNode* tempB=headB;

        while(tempA){
            lengthA++;
            tempA=tempA->next;
        }

        while(tempB){
            lengthB++;
            tempB=tempB->next;
        }
        tempA=headA;
        tempB=headB;

        while(lengthA>lengthB){
            tempA=tempA->next;
            lengthA--;
        }
        while(lengthA<lengthB){
            tempB=tempB->next;
            lengthB--;
        }
        while(tempA && tempB){
            if(tempA==tempB){
                return tempA;
            }else{
                tempA=tempA->next;
                tempB=tempB->next;
            }
        }
        return NULL;
    }
};