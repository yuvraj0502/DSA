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
private:
    ListNode* helper(vector<ListNode*>&lists,int left,int right){
        if(left==right){
            return lists[left];
        }
        int mid=left+(right-left)/2;
        ListNode* leftHelper=helper(lists,left,mid);
        ListNode* rightHelper=helper(lists,mid+1,right);

        return mergeTwoList(leftHelper,rightHelper);
    }

public:
    ListNode* mergeTwoList(ListNode* l1,ListNode* l2){
        ListNode* dummy=new ListNode(0);
        ListNode* current=dummy;

        while(l1!=nullptr && l2!=nullptr){
            if(l1->val <l2->val){
                current->next=l1;
                l1=l1->next;
            }else{
                current->next=l2;
                l2=l2->next;
            }
            current=current->next;
        }
        if(l1!=nullptr){
            current->next=l1;
        }
        if(l2!=nullptr){
            current->next=l2;
        }
        return dummy->next;
    }

public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()){ 
            return nullptr;
        }
        return helper(lists,0,lists.size()-1);
    }
};