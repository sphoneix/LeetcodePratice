/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution {
public:
    bool IsNineNumberValid(vector<char> nineNumbers) {
        int count = 0;
        set<int> numbers;
        for (int i = 0; i < nineNumbers.size(); ++i) {
            if (nineNumbers[i] > '0' && nineNumbers[i] <= '9') {
                count++;
                numbers.insert(nineNumbers[i] - '0');
            }
        }
        if (count == numbers.size()) {
            return true;
        }
        return false;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; ++i) {
            vector<char> numbers;
            numbers = board[i];
            if (!IsNineNumberValid(numbers)) {
                return false;
            }
        }
        for (int i = 0; i < 9; ++i) {
            vector<char> numbers;
            for (int j = 0; j < 9; ++j) {
                numbers.push_back(board[j][i]);
            }
            if (!IsNineNumberValid(numbers)) {
                return false;
            }
        }
        vector<vector<char>> Numbers;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                vector<char> numbers;
                for (int k = 0; k < 3; ++k) {
                    for (int l = 0; l < 3; ++l) {
                        numbers.push_back(board[3 * i + k][3 * j + l]);
                    }
                }
                if (!IsNineNumberValid(numbers)) {
                    return false;
                }
            }
        }
        return true;
    }
};
// @lc code=end

