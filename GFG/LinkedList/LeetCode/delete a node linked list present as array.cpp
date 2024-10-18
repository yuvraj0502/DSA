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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>toRemove(nums.begin(),nums.end());
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* prev=dummy;

        while(prev->next!=NULL){
            if(toRemove.count(prev->next->val)){
                ListNode* todelete=prev->next;
                prev->next=prev->next->next;
                delete todelete;
            }else{
                prev=prev->next;
            }
        }
        return dummy->next;
    }
};