/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */
class Solution {
public:
    int lengthOfLastWord(string s) {
        if (s.empty())
            return 0;
        int length = s.size();
        while (length - 1 >= 0 && s[length - 1] == ' ') {
            s.erase(length - 1);
            length--;
        }
        int pos = s.find_last_of(' ');
        return length - pos - 1;
    }
};

