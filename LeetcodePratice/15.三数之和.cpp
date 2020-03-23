/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if (nums.size() < 3 || nums.front() > 0 || nums.back() < 0)
            return {};
        vector<vector<int>> ans;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int low = i + 1;
            int high = nums.size() - 1;
            while (low < high) {
                int sum = nums[i] + nums[low] + nums[high];
                if (sum == 0) {
                    if (low == i + 1 || high == nums.size() - 1) {
                        ans.push_back(vector<int>{nums[i], nums[low], nums[high]});
                        ++low;
                        --high;
                    }
                    else if (nums[low] == nums[low - 1])
                        ++low;
                    else if (nums[high] == nums[high + 1])
                        --high;
                    else {
                        ans.push_back(vector<int>{nums[i], nums[low], nums[high]});
                        ++low;
                        --high;
                    }
                }
                else if (sum < 0)
                    ++low;
                else
                    --high;
            }
        }
        return ans;
    }
};

