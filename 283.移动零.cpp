/*
 * @lc app=leetcode.cn id=283 lang=cpp
 *
 * [283] 移动零
 */
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int size = nums.size();
//         if (size <= 1)
//             return;
//         int zeroCnt = 0;
//         for (int i = 0; i < size; ++i) {
//             if (nums[i] == 0)
//                 zeroCnt++;
//         }
//         vector<int> ans;
//         for (int i = 0; i < size; ++i) {
//             if (nums[i] != 0)
//                 ans.push_back(nums[i]);
//         }
//         while (zeroCnt--) {
//             ans.push_back(0);
//         }
//         for (int i = 0; i < size; ++i) {
//             nums[i] = ans[i];
//         }
//     }
// };
// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int size = nums.size();
//         if (size <= 1)
//             return;
//         int lastZeroIndex = 0;
//         for (int i = 0; i < size; ++i)
//             if (nums[i] != 0)
//                 nums[lastZeroIndex++] = nums[i];
//         for (int i = lastZeroIndex; i < nums.size(); ++i)
//             nums[i] = 0;
//     }
// };
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for (int zeroIndex = 0, index = 0; index < nums.size(); ++index) {
            if (nums[index] != 0)
                swap(nums[zeroIndex++], nums[index]);
        }
    }
};
