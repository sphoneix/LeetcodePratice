/*
 * @lc app=leetcode.cn id=728 lang=cpp
 *
 * [728] 自除数
 */

// @lc code=start
class Solution {
public:
    bool IsSelfDivide(int number) {
        int temp = number;
        while(temp) {
            if (temp % 10 == 0) {
                return false;
            }
            int i = temp % 10;
            if (number % i == 0) {
                temp = temp / 10;
            } else {
                return false;
            }
        }
        return true;
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> numbers;
        for (int i = left; i <= right; ++i) {
            if (IsSelfDivide(i)) {
                numbers.push_back(i);
            }
        }
        return numbers;
    }
};
// @lc code=end

