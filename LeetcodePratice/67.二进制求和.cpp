/*
 * @lc app=leetcode.cn id=67 lang=cpp
 *
 * [67] 二进制求和
 */
class Solution {
public:
    string addBinary(string a, string b) {
        int len1 = a.size();
        int len2 = b.size();
        while (len1 < len2) {
            a = '0' + a;
            len1++;
        }
        while (len1 > len2) {
            b = '0' + b;
            len2++;
        }
        for (int i = a.size() - 1; i > 0; --i) {
            a[i] = a[i] - '0' + b[i];
            if (a[i] >= '2') {
                a[i] = (a[i] - '0') % 2 + '0';
                a[i - 1] = a[i - 1] + 1;
            }
        }
        a[0] = a[0] - '0' + b[0];
        if (a[0] >= '2') {
            a[0] = (a[0] - '0') % 2 + '0';
            a = '1' + a;
        }
        return a;
    }
};


