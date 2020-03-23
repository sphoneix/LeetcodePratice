/*
 * @lc app=leetcode.cn id=896 lang=cpp
 *
 * [896] 单调数列
 */

// @lc code=start
class Solution {
public:
    bool IsIncrease(vector<int>& A) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] > A[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool IsDecrease(vector<int>& A) {
        for (int i = 0; i < A.size() - 1; ++i) {
            if (A[i] < A[i + 1]) {
                return false;
            }
        }
        return true;
    }
    bool isMonotonic(vector<int>& A) {
        if (A.size() < 2) {
            return true;
        }
        return IsDecrease(A) || IsIncrease(A);
    }
};
// @lc code=end

