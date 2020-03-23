/*
 * @lc app=leetcode.cn id=66 lang=cpp
 *
 * [66] 加一
 */
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int size = digits.size();
        if (digits[size - 1] != 9)
            digits[size - 1] += 1;
        else {
            digits[size - 1] = 0;
            for (int i = size - 1; i >= 1; --i) {
                if (digits[i] == 0) {
                    digits[i - 1] = (digits[i - 1] + 1) % 10;
                }
                else 
                    break;
            }
            if (digits[0] == 0)
                digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

