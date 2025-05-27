public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        for(int i = 0;i < nums.Length;i++){
            for(int y = 0;y < nums.Length;y++){
                if(i == y) continue;
                if(nums[i] + nums[y] == target){
                    return [i,y];
                }
            }    
        }
        return [0,0];
    }
}