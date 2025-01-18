class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double smallest = INT_MAX;
        std::sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size() / 2;++i){
            double result = (nums[i] + nums[nums.size() - 1- i]) / 2.0;
            if(result < smallest) smallest = result;
        }
        return smallest;
    }
};