// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem704.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */
d
// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        vector<int> array = nums;
        int start = 0;
        int end = array.size()  -   1;
        int len;
        while(start <= end)
        {
            len = (start + end) / 2;
            
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
                return len;
            }
        }

        return -1;
    }
};
// @lc code=end

