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
        ListNode* templ1 = l1;
        ListNode* templ2 = l2;
        ListNode* finalNodes = nullptr;
        ListNode* mover = nullptr;

        while (templ1 != nullptr || templ2 != nullptr) {
            int currentValue = 0;
            if (templ1 != nullptr) {
                currentValue += templ1->val;
                templ1 = templ1->next;
            }
            if (templ2 != nullptr) {
                currentValue += templ2->val;
                templ2 = templ2->next;
            }
            if(finalNodes == nullptr){
                finalNodes = new ListNode(currentValue,nullptr);
                mover = finalNodes;
            }
            else{
                ListNode* temp = new ListNode(currentValue);
                mover->next = temp;
                mover = mover->next;
            }
        }
        ListNode* temp = finalNodes;
        while (temp != nullptr) {
            if(temp->val > 9){
                temp->val -= 10;
                if(temp->next != nullptr){
                    temp->next->val++;
                }
                else{
                    ListNode* newTemp = new ListNode(1);
                    temp->next = newTemp;
                }
            }
            temp = temp->next;
        }
        return finalNodes;
    }
};