// add two numbers so they add up to the target mentioned

public class Solution {
    public int[] twoSum(int[] nums, int target) {
        int result[] = new int[2];
        if (nums == null || nums.length == 0) {
            return result;
        }

        // [2,11,7,15] target =  9

        HashMap<Integer, Integer> visited = new HashMap<>();
        for(int i=0; i<nums.length; i++) {
            if(visited.containsKey(target - nums[i])) {
                result[0] = visited.get(target - nums[i]); //0
                resutl[1] = i; //1
                return result; //[0.1]
            }
            visited.put(nums[i], i); //{2 " 0"}
        }
        return result;
    }
}