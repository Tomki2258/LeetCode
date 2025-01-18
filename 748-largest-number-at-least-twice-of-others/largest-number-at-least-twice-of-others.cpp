class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int secondBiggest;
        int biggestIndex = 0;
        for(int i = 0;i < nums.size();++i){
            if(nums[i] >= nums[biggestIndex])
                biggestIndex = i;
        }


        for(int i = 0;i < nums.size();++i){
            if(i == biggestIndex) continue;

            if(nums[i] * 2 > nums[biggestIndex]){
                std::cout << nums[i] * 2 << "-" << nums[biggestIndex] <<"\n";
                return -1;
            }
        }

        return biggestIndex;
    }
};