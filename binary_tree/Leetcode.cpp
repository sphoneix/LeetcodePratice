#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

class Solution {
public:
    // 面试题 17.16. 按摩师
    int massage(vector<int>& nums) {
        int num = nums.size();
        if (num == 0) {
            return 0;
        }
        int dp0 = 0;
        int dp1 = nums[0];
        for (int i = 0; i < num; ++i) {
            int temp0 = max(dp0, dp1);
            int temp1 = dp0 + nums[i];
            dp0 = temp0;
            dp1 = temp1;
        }
        return max(dp0, dp1);
    }
    // 面试题62. 圆圈中最后剩下的数字
    int lastRemaining(int n, int m) {
        int ans = 0;
        for (int i = 2; i <= n; ++i) {
            ans = (ans + m) % i;
        }
        return ans;
    }
};