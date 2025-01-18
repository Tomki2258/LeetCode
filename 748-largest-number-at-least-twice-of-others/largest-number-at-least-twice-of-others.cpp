class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int secondBiggest = -1;
        int biggestIndex = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[biggestIndex]) {
                secondBiggest = biggestIndex;
                biggestIndex = i;
            } else if (secondBiggest == -1 || nums[i] > nums[secondBiggest]) {
                secondBiggest = i;
            }
        }


        if(nums[secondBiggest] * 2 > nums[biggestIndex]){
            return -1;
        }

        return biggestIndex;
    }
};