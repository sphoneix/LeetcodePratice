/*
 * @lc app=leetcode.cn id=217 lang=cpp
 *
 * [217] 存在重复元素
 */
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s;
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            if (s.find(nums[i]) != s.end())
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};

