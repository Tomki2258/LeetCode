class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 1) return 1;
    
        for(size_t i = 0; i + 1 < nums.size(); ++i){
            if(nums[i] == nums[i + 1]){
                nums[i] = -1000;
            }
        }
        nums.erase(std::remove(nums.begin(), nums.end(), -1000), nums.end());

        return nums.size();
    }
};