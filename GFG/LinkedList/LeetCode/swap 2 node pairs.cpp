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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;  
        }

        ListNode* new_head = head->next;

        ListNode* prev = nullptr;  
        ListNode* curr = head;     

        while (curr != nullptr && curr->next != nullptr) {
            ListNode* next_node = curr->next;  

            curr->next = next_node->next;
            next_node->next = curr;

            if (prev != nullptr) {
                prev->next = next_node;
            }

            prev = curr;

            curr = curr->next;
        }

        return new_head;
    }
};