/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

// @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int N = nums.size();
        int j = 1;
        vector<int> numExistIndex(N + 1, 0);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0 && nums[i] < N + 1) {
                numExistIndex[nums[i]] = 1;
            }
        }
        for (; j < N + 1; ++j) {
            if (numExistIndex[j] == 0) {
                return j;
            }
        }
        return j;
    }
};
// @lc code=end

