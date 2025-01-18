class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        vector<double> averages;
        std::sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size() / 2;++i){
            averages.push_back((nums[i] + nums[nums.size() - 1- i]) / 2.0);
        }
        return *std::min_element(averages.begin(),averages.end());
    }
};