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
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector<int>rev;
        if(temp->next==NULL){
            return temp;
        }
        while(temp!=NULL){
            rev.push_back(temp->val);
            temp=temp->next;
        }
        vector<int>ans;
        ans=rev;
        reverse(rev.begin(),rev.end());
        return rev==ans;
    }
};