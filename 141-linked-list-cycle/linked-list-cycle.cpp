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
    vector<ListNode*> seen;
    bool isIn(ListNode* ptr){
        for(int i  =0 ;i  <seen.size();++i){
            if(seen[i] == ptr){
                return true;
            }
        }
        return false;
    }
    bool hasCycle(ListNode *head) {
        if(head == nullptr) return false;
        ListNode* ptr = head;
        while (ptr) {
            if (isIn(ptr)) {
                return true;
            }
            seen.push_back(ptr);
            ptr = ptr->next;
        }

        return false;
    }
};