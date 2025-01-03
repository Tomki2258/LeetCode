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
    ListNode* middleNode(ListNode* head) {
        int itemsCount = 0;
        ListNode* temp = head;

        while(temp != nullptr){
            temp = temp->next;
            itemsCount++;
        }
        temp = head;
        std::cout << itemsCount / 2 << " ";
        for(int i = 0 ; i < itemsCount / 2;++i){
            temp = temp->next;
        }

        return temp;
    }
};