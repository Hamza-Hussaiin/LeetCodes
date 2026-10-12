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
    ListNode* reverseList(ListNode* head) {
        ListNode* current=head;
        ListNode* prev=nullptr;
        ListNode* fut=nullptr;
        while(current!=nullptr){
            fut=current->next;
            current->next=prev;
            prev=current;
            current=fut;
        }
        head=prev;
        return head;
        
    }
};