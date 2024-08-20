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
    ListNode* insertionSortList(ListNode* head) {
        if(!head){
            return nullptr;
        }
        vector<int>ans;
        ListNode* current=head;

        while(current){
            ans.push_back(current->val);
            current=current->next;
        }

        for(int i=0;i<ans.size();i++){
            int currentval=ans[i];
            int j=i-1;
            while(j>=0 && ans[j]>currentval){
                ans[j+1]=ans[j];
                j--;
            }
            ans[j+1]=currentval;
        }
        current=head;
        for(int i=0;i<ans.size();i++){
            current->val=ans[i];
            current=current->next;
        }
        return head;
    }
};