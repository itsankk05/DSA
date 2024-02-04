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

    ListNode* findLastNode(ListNode* temp, int k){
        int count =1;
        while(temp){
            if(count == k) return temp;
            temp = temp->next;
            count++;
        }
        return temp;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0) return head;

        int len =1;
        ListNode *tail = head;
        while(tail->next){
            len++;
            tail=tail->next;
        }

        k = k%len;
        if(k == 0) return head;

        int pos = len - k;
        tail->next = head;
        while(pos--){
            tail = tail->next;
        }
        head = tail->next;
        tail->next = NULL;
        return head;
    }
};