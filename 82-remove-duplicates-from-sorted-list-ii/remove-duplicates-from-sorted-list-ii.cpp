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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* prev = dummy;  
        ListNode* first = head;  

        while(first!=NULL){
            if(first->next != NULL && first->val==first->next->val){
                int dup = first->val;
                while (first != NULL && first->val == dup) {
                    first = first->next;
                }
                prev->next = first;
            }else{
                prev = first;
                first=first->next;
            }
        }
        return dummy->next;
    }
};