/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 求众数
 */
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int mode;
        int maxCnt = 0;
        int tempCnt = 1;
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                tempCnt += 1;
            }
            else {
                if (maxCnt >= tempCnt)
                    continue;
                else {
                    mode = nums[i - 1];
                    maxCnt = tempCnt;
                }
                tempCnt = 1;
            }
        }
        if (maxCnt < tempCnt)
            mode = nums.back();
        return mode;
    }
};

