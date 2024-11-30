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
        vector<int> numbers;
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
            numbers.push_back(currentValue);
        }

        for(int i = 0; i < numbers.size();++i){
            if(numbers[i] > 9) {
                numbers[i] -= 10;
                if(i + 1 > numbers.size() - 1){
                    numbers.push_back(1);
                }
                else{
                    numbers[i + 1]++;
                }
            }
        }
        ListNode* finalNodes = new ListNode(numbers[0],nullptr);
        ListNode* mover = finalNodes;
        for(int i = 0; i < numbers.size();++i){
            ListNode* temp = new ListNode(numbers[i]);
            mover->next = temp;
            mover = mover->next;
        }
        return finalNodes->next;
    }
};