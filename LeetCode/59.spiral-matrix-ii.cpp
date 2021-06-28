/*
 * @lc app=leetcode id=59 lang=cpp
 *
 * [59] Spiral Matrix II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>>map(n, vector<int>(n, 0));

        int col = 0, row = 0;
        int num = 1;
        map[col][row] = 1;
        while (map[col][row] != (n * n))
        {
            while (((row + 1) < n) && (map[col][row + 1] == 0))
            {
                num = num + 1;
                map[col][row+1] = num;
                row++;
            }

            while (((col + 1) < n) && (map[col + 1][row] == 0))
            {
                num = num + 1;
                map[col+1][row] = num;
                col++;
            }

            while (((row - 1) >= 0) && (map[col][row - 1] == 0))
            {
                num = num + 1;
                map[col][row-1] = num;
                row--;
            }

            while (((col - 1) >= 0) && (map[col - 1][row] == 0))
            {
                num = num + 1;
                map[col-1][row] = num;
                col--;
            }
        }
        return map;
    }
};
// @lc code=end

