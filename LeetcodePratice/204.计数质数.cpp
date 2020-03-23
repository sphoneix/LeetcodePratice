/*
 * @lc app=leetcode.cn id=204 lang=cpp
 *
 * [204] 计数质数
 */
class Solution {
public:
    int countPrimes(int n) {
        int cnt = 0;
        vector<bool> isPrime(n, true);
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                cnt++;
                for (int j = i + i; j < n; j += i)
                    isPrime[j] = false;
            }
        }
        return cnt;
    }
};
