/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        if (target < nums[0] || target > nums[high]) {
            return -1;
        }
        int medium;
        while (low <= high) {
            medium = (low + high) / 2;
            if (nums[medium] == target) {
                return medium;
            } else if (nums[medium] < target) {
                low = medium + 1;
            } else {
                high = medium - 1;
            }
        }
        return -1;
    }
};
// @lc code=end

