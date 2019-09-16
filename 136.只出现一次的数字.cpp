/*
 * @lc app=leetcode.cn id=136 lang=cpp
 *
 * [136] 只出现一次的数字
 */
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for (auto i : nums) {
            a ^= i;
        }
        return a;
    }
};

