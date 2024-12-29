class Solution
{
    public:
        int missingNumber(vector<int> &nums)
        {
            int supposeSum = 0;
            for(int i = 0;i < nums.size() + 1;++i){
                supposeSum += i;
            }
            int sum = 0;
            for(int i = 0;i < nums.size();++i){
                sum += nums[i];
            }
            //std::cout << supposeSum << " " << sum << " ";
            return supposeSum - sum;
        }
};