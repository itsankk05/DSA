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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *dummyHead = new ListNode(0);
        ListNode *tail = dummyHead;
        int carry = 0;
        int digit1 = 0;
        int digit2 = 0;
        while(l1!=NULL || l2!=NULL || carry != 0){
            if(l1 != NULL){
                digit1 = l1->val;                
            }
            else{
                digit1=0;
            }
            if(l2 != NULL){
                digit2 = l2->val;                
            }
            else{
                digit2 = 0;
            }

            int sum = digit1+ digit2+ carry;
            int digit = sum%10;
            carry = sum/10;

            ListNode* newNode = new ListNode(digit);
            tail->next = newNode;
            tail = tail->next;

            if(l1 != NULL){
                l1 = l1->next;
            }
            else{
                l1 = NULL;
            }
            
            if(l2 != NULL){
                l2 = l2->next;
            }
            else{
                l2 = NULL;
            }
        }
        ListNode *result = dummyHead->next;
        delete dummyHead;
        return result;
    }
};