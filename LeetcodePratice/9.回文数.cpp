/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */
class Solution {
public:
    bool isPalindrome(int x) {
        if (x >= 0 && x <= 9)
            return true;
        if (x % 10 == 0 || x < 0)
            return false;
        int reverseNumber = 0;
        while (reverseNumber < x) {
            int rest = x % 10;
            x /= 10;
            reverseNumber = reverseNumber * 10 + rest;
        }
        if (x == reverseNumber || reverseNumber / 10 == x)
            return true;
        else
            return false;
    }
};

