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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head;
        int count=0;
        while(first){
            count++;
            first=first->next;
        }
        if(count==1 && n==1){
            return NULL;
        }
        int ans = count-n;

        if(ans==0){
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        first = head;
        while(ans!=1 && first->next!=NULL){
            first=first->next;
            ans--;
        }
        ListNode* third = first->next;
        first->next=third->next;

        delete third;
        return head;
    }
};