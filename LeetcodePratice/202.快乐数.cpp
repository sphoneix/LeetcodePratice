/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        int sum = 0;
        while (n != 1) {
            s.insert(n);
            n = convert(n);
            if (s.count(n) != 0)
                return false;
        }
        return true;
    }
    int convert(int n) {
        int SquareSum = 0;
        while (n) {
            int rest = n % 10;
            SquareSum += rest * rest;
            n /= 10;
        }
        return SquareSum;
    }
};

