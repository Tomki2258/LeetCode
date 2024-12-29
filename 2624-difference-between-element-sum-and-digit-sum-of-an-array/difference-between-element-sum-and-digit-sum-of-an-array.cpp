class Solution {
public:
    int elementSum(vector<int>& nums){
        int val = 0;
        for(int i = 0 ; i < nums.size();++i){
            val += nums[i];
        }

        return val;
    }
    int digitSum(vector<int>& nums){
        int val = 0;
        int iNum = 0;
        for(int i = 0;i < nums.size();++i){
            while(nums[i] > 0) {
                iNum = nums[i] % 10;
                val += iNum;
                nums[i] = nums[i] / 10;
            }   
        }
        return val;
    }
    int differenceOfSum(vector<int>& nums) {
        int result = elementSum(nums) - digitSum(nums);
        if(result < 0) return -result;
        return result;
    }
};