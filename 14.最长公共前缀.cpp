/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int j = 0;
        int size = strs.size();
        if (size == 0)
            return "";
        if (size == 1)
            return strs.at(0);
        while (true) {
            for (int i = 0; i < size; ++i) {
                if (j >= strs.at(i).size())
                    return strs.at(i).substr(0, j);
                char c = strs.at(0).at(j);
                if (c != strs.at(i).at(j))
                    return strs.at(i).substr(0, j);
            }
            ++j;
        }
    }
};

