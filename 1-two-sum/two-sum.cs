public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for(int i = 0;i < nums.Length;i++){
            for(int y = nums.Length - 1;y > 0;y--){
                if(i == y) continue;
                if(nums[i] + nums[y] == target){
                    return [i,y];
                }
            }    
        }
        return [0,0];
    }
}