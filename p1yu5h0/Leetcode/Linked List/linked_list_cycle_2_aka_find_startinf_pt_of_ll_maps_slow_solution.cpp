/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        //using brute force ie. hash table 
        ListNode* temp = head;
        unordered_set<ListNode*> m;
        while(temp!=nullptr){
            if(m.find(temp)!=m.end()){
                break;
            }
            m.emplace(temp);
            temp = temp->next;
        }
        //since if break then temp we reach the starting of cycle
        return temp;
    }
};