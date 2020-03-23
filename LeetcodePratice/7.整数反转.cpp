/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */
class Solution {
public:
    int reverse(int x) {
        int reverseNumber = 0;
        while (x) {
            int rest = x % 10;
            x /= 10;
            if (reverseNumber > INT_MAX / 10 || (reverseNumber == INT_MAX / 10 && rest > 7))
                return 0;
            if (reverseNumber < INT_MIN / 10 || (reverseNumber == INT_MIN / 10 && rest < -8))
                return 0;
            reverseNumber = reverseNumber * 10 + rest;
        }
        return reverseNumber;

    }
};

