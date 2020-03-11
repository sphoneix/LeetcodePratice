/*
 * @lc app=leetcode.cn id=1013 lang=cpp
 *
 * [1013] 将数组分成和相等的三个部分
 */

// @lc code=start
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& A) {
        int sum = 0;
        for (auto a : A) {
            sum += a;
        }
        if (sum % 3) {
            return false;
        }
        int low = 0;
        int lowSum = 0;
        for (; low < A.size(); ++low) {
            lowSum += A[low];
            if (lowSum * 3 == sum) {
                break;
            }
        }
        if (low == A.size()) {
            return false;
        }
        int high = low + 1;
        int highSum = 0;
        for (; high < A.size(); ++high) {
            highSum += A[high];
            if (highSum * 3 == sum) {
                break;
            }
        }
        if (high == A.size() || high == A.size() - 1) {
            return false;
        }
        return true;
    }
};
// @lc code=end

