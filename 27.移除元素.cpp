/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        /*
        remove函数返回并不是真正的删除元素，可以用erase()删除给定区间的元素
        */
        // nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        // return nums.size();
        /*
        remove返回指向新的超尾值的迭代器
        */
        return Remove(nums.begin(), nums.end(), val) - nums.begin();
    }
    vector<int>::iterator Remove(vector<int>::iterator begin, 
                                vector<int>::iterator end, const int val) {
        vector<int>::iterator it = begin;
        while (begin != end) {
            if (!(*begin == val)) {
                *it = move(*begin);
                ++it;
            }
            ++begin;
        }
        return it;
    }
};
