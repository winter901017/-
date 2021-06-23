/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        vector<int> array = nums;
        vector<int> ans;
        int start = 0;
        int end = array.size()  -   1;

        while(start <= end)
        {
            int len = (start + end) / 2;
                
            if(array[len] > target)
            {
                end = len - 1;
            }
            else if(array[len] < target)
            {
                start = len + 1;
            }
            else
            {
                ans.push_back(start);
                ans.push_back(end);
                return ans;
            }
        }

        ans.push_back(-1);
        ans.push_back(-1);
        return ans;
    }
};
// @lc code=end

