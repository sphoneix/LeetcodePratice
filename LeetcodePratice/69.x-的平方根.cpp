/*
 * @lc app=leetcode.cn id=69 lang=cpp
 *
 * [69] x 的平方根
 */
class Solution {
public:
    int mySqrt(int x) {
        long long low = 0;
        long long high = x / 2 + 1;
        while (low <= high) {
            long long medium = (low + high) / 2;
            long long square = medium * medium;
            if (square == x)
                return medium;
            else if (square < x)
                low = medium + 1;
            else
                high = medium - 1;
        }
        return high;
    }
};

