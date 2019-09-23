/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */
class Solution {
public:
    bool isValid(string s) {
        string::size_type strSize = s.size();
        if (strSize == 0)
            return true;
        char stack[10240];
        int top = 0;
        for (int i = 0; s[i]; ++i) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                stack[top++] = s[i];
            else {
                if ((--top) < 0)   
                    return false;
                if (s[i] == ')' && stack[top] != '(')
                    return false;
                if (s[i] == ']' && stack[top] != '[')
                    return false;
                if (s[i] == '}' && stack[top] != '{')
                    return false;
            }
        }
        return (top ? false : true);
    }
};
