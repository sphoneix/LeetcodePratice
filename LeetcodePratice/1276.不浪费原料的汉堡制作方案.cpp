/*
 * @lc app=leetcode.cn id=1276 lang=cpp
 *
 * [1276] 不浪费原料的汉堡制作方案
 */

// @lc code=start
class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> ans;
        for (int i = 0; i <= tomatoSlices / 4; ++i) {
            int tomatoRest = tomatoSlices - 4 * i;
            int cheeseRest = cheeseSlices - i;
            if (tomatoRest == 2 * cheeseRest) {
                ans.push_back(i);
                ans.push_back(cheeseRest);
                return ans;
            }
        }
        return ans;
    }
};
// @lc code=end

