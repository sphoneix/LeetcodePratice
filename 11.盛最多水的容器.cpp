/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int area = 0;
        while (low < high) {
            int temp = (high - low) * min(height[low], height[high]);
            area = max(area, temp);
            if (height[low] < height[high])
                low++;
            else
                high--;
        }
        return area;
    }
};

