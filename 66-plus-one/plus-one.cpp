class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size() - 1] += 1;
        
        for(int i = digits.size() - 1;i >=0 ;--i){
            if(digits[i] > 9){
                digits[i] = 0;
                if(i == 0){
                    digits.insert(digits.begin(), 1);
                }
                else{
                    digits[i - 1] += 1;
                }
            }
        }
        return digits;
    }
};