Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

You must write an algorithm that runs in O(n) time.

 

Example 1:

Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.
Example 2:

Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9
 

Constraints:

0 <= nums.length <= 105
-109 <= nums[i] <= 109







  
  class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0; 
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int new_length = 1;
        int length = 1;
        for(int i=1;i<n;i++){
            if(nums[i] - nums[i-1] == 1){
                new_length++;
            }
            if(nums[i] - nums[i-1] > 1){
                new_length = 1;
            }

            length = max(length,new_length);
        }

        return length;
    }
};
