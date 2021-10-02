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
    ListNode* rotateRight(ListNode* head, int k) {
        //brute force solution
        if(k==0){
            return head;
        }
        if(head == nullptr){
            return nullptr;
        }
        if(head->next == nullptr){
            return head;
        }
        while(k--){
            ListNode* temp = head;
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }
            temp->next->next = head;
            ListNode* temp2 = temp->next;
            temp->next = nullptr;
            head = temp2;
        }
        return head;
    }
};