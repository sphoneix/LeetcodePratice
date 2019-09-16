/*
 * @lc app=leetcode.cn id=70 lang=cpp
 *
 * [70] 爬楼梯
 */
class Solution {
public:
    int climbStairs(int n) {
        int res;
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        int a1 = 1;
        int a2 = 2;
        for (int i = 2; i < n; ++i) {
            res = a1 + a2;
            a1 = a2;
            a2 = res;
        }
        return res;
    }
};

