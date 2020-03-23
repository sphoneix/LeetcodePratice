/*
 * @Description: In User Settings Edit
 * @Author: your name
 * @Date: 2019-10-18 21:30:36
 * @LastEditTime: 2019-10-18 21:37:13
 * @LastEditors: Please set LastEditors
 */
/*
 * @lc app=leetcode.cn id=554 lang=cpp
 *
 * [554] 砖墙
 */

// @lc code=start
class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        unordered_map<int, int> times;
        for(vector<int> vec : wall) {
            int sum = 0;
            for (int i = 0; i < vec.size() - 1; ++i) {
                sum += vec[i];
                times[sum]++;
            }
        }
        int result = 0;
        for (auto i : times) {
            result = max(result, i.second);
        }
        return wall.size() - result;
    }
};
// @lc code=end

