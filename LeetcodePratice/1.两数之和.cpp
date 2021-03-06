/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // for (int i = 0; i < nums.size() - 1; ++i) {
        //     for (int j = i + 1; j < nums.size(); ++j) {
        //         if (nums[i] + nums[j] == target) {
        //             res.push_back(i);
        //             res.push_back(j);
        //         }
        //     }
        // }
        // return res;
        unordered_map<int, int> numbers;
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numbers.find(complement) != numbers.end()) {
                int ans[] = {i, numbers[complement]};
                return vector<int>(ans, ans + 2);
            }
            numbers[nums[i]] = i;
        }
    }
};

