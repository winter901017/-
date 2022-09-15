/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;

        // String isn't be odd number
        if ((s.size() % 2) != 0)
        {
            return false;
        }

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                st.push(')');
            }
            else if (s[i] == '{')
            {
                st.push('}');
            }
            else if (s[i] == '[')
            {
                st.push(']');
            }
            else if (st.empty() || st.top() != s[i])
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end
