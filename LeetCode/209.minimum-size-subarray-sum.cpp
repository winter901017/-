/*
 * @lc app=leetcode id=209 lang=cpp
 *
 * [209] Minimum Size Subarray Sum
 */

// @lc code=start
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int right = 0;
        int sum = 0;
        int len = 9999;
        for(right = 0;right < nums.size();right++)
        {
            sum+=nums[right];
            while(sum >= target)
            {
                len = min(right - left + 1,len);
                sum -=nums[left];
                left++;
            }
        }
        if(len == 9999)
        {
            return 0;
        }
        return len;
    }
};
// @lc code=end

