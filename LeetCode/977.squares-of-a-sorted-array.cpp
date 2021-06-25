// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem977.h"

using namespace std;
// @before-stub-for-debug-end

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
        /* Initial num */
        vector<int> num(nums.size(),0);

        /* set left and right and index */
        int left = 0;
        int right = nums.size() - 1;
        int index = nums.size() - 1;

        /* double pointer algorithm */
        while(index != -1)
        {
            /* left biger right nums */
            if(abs(nums[left]) > abs(nums[right]))
            {
                num[index] = nums[left] * nums[left];
                left++;
            }
             /* right biger left nums */
            else if(abs(num[left]) <= abs(num[right]))
            {
                num[index] = nums[right] * nums[right];
                right--;
            }
            index--;
        }

        sort(num.begin(),num.end());

        return num;
    }
};
// @lc code=end

