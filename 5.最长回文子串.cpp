/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        if (s == "") {
            return "";
        }
        int start = 0;
        int end = 0;
        for (int i = 0; i < s.length(); ++i) {
            int expand1 = Expand(s, i, i);
            int expand2 = Expand(s, i, i + 1);
            int length = max(expand1, expand2);
            if (length > end - start) {
                start = i - (length - 1) / 2;
                end = i + length / 2;
            }
        }
        return s.substr(start, end - start + 1);
    }
private:
    int Expand(string s, int left, int right) {
        int Left = left;
        int Right = right;
        while (Left >= 0 && Right < s.length() && s[Left] == s[Right]) {
            Left--;
            Right++;
        }
        return Right - Left - 1;
    }
};
// @lc code=end

