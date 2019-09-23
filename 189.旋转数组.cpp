/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-09-23 22:21:21
 * @LastEditTime: 2019-09-23 23:02:53
 * @LastEditors: Please set LastEditors
 */
/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 旋转数组
 */
//方法一最后一个用例超时
// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k = k % nums.size();
//         if (k >= nums.size())
//             k = k % nums.size();
//         for (int i = 0; i < k; ++i) {
//             int lastNumber = nums[nums.size() - 1];
//             for (int j = nums.size() - 2; j >= 0; --j) {
//                 nums[j + 1] = nums[j];
//             }
//             nums[0] = lastNumber;
//         }
//     }
// };
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if (k > nums.size())
            k %= nums.size();
        if (k != 0) {
            vector<int> numsTemp(k);
            int index = 0;
            for (int i = nums.size() - k; i < nums.size(); ++i) {
                numsTemp[index++] = nums[i];
            }
            index = 0;
            for (int i = nums.size() - k - 1; i >= 0; --i) {
                nums[nums.size() - 1 - index++] = nums[i];
            }
            for (int i = 0; i < k; ++i) {
                nums[i] = numsTemp[i];
            }
        }
    }
};

