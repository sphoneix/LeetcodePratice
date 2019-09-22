/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除排序数组中的重复项
 */
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         vector<int>::size_type size = nums.size();
//         if (size <= 1)
//             return size;
//         vector<int>::size_type slowPointer = 1;
//         for (vector<int>::size_type fastPointer = 1; fastPointer < size; ++fastPointer) {
//             if (nums[fastPointer] != nums[fastPointer - 1])
//                 nums[slowPointer++] = nums[fastPointer];
//         }
//         return slowPointer;
//     }
// };
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::size_type size = nums.size();
        if (size <= 1)
            return size;
        vector<int>::size_type slowPointer = 0;
        for (vector<int>::size_type fastPointer = 1; fastPointer < size; ++fastPointer) {
            if (nums[fastPointer] != nums[slowPointer])
                nums[++slowPointer] = nums[fastPointer];
        }
        return slowPointer + 1;
    }
};
