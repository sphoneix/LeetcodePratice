/*
 * @lc app=leetcode.cn id=35 lang=cpp
 *
 * [35] 搜索插入位置
 */
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        if (nums.front() > target)
            return 0;
        if (nums.back() < target)
            return nums.size();
        while (low < high) {
            int medium = (low + high) / 2;
            if (nums[medium] == target) 
                return medium;
            else if (nums[medium] < target)
                low = medium + 1;
            else
                high = medium;
        }
        return high;
    }
};

