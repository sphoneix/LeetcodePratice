/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution {
public:
    int firstUniqChar(string s) {
        map<int, int> numberOfChar;
        for (auto c : s) {
            numberOfChar[c]++;
        }
        for (int i = 0; i < s.size(); ++i) {
            if (numberOfChar[s[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end

