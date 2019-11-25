/*
 * @lc app=leetcode.cn id=504 lang=cpp
 *
 * [504] 七进制数
 */

// @lc code=start
class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) {
            return "0";
        }
        int flag = 1;
        if (num < 0) {
            flag = -1;
            num = flag * num;
        }
        string str;
        while (num) {
            str.insert(0, 1, '0' + num % 7);
            num /= 7;
        }
        if (flag == -1) {
            str.insert(0, 1, '-');
        }
        return str;
    }
};
// @lc code=end

