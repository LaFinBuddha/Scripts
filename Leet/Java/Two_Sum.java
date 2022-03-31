class Solution {
    public int[] twoSum(int[] nums, int target) {
        int forwardCount = 1;
        
        while(forwardCount < nums.length){
            for (int i = 0 ; (i + forwardCount) < nums.length ; i++){
                if (nums[i]+nums[i+forwardCount] == target)
                    return new int[]{i,(i+forwardCount)};
            }
            forwardCount++;
        }
        
        return null;
    }
}
