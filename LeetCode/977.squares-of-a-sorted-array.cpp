/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        vector<int> num = nums;
        for(int i=0;i<num.size();i++)
        {
            num[i] = num[i] * num[i];
        }    

        sort(num.begin(),num.end());
        return num;
    }
};
// @lc code=end

