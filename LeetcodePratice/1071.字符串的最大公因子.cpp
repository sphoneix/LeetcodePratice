/*
 * @lc app=leetcode.cn id=1071 lang=cpp
 *
 * [1071] 字符串的最大公因子
 */

// @lc code=start
class Solution {
public:
    string gcdOfStrings(string str1, string str2)
    {
        int len1 = str1.length();
        int len2 = str2.length();
        for (int i = min(len1, len2); i > 0; --i) {
            if (len1 % i == 0 && len2 % i == 0) {
                string str = str1.substr(0, i);
                if (CheckIsDivisor(str1, str) && CheckIsDivisor(str2, str)) {
                    return str;
                }
            }
        }
        return "";
    }
private:
    bool CheckIsDivisor(string bigStr, string smallStr)
    {
        int num = bigStr.length() / smallStr.length();
        string cmp = "";
        for (int i = 0; i < num; ++i) {
            cmp += smallStr;
        }
        return cmp == bigStr;
    }
};
// @lc code=end

