/*
 * @lc app=leetcode.cn id=315 lang=cpp
 *
 * [315] 计算右侧小于当前元素的个数
 */

// @lc code=start
struct BstNode {
    int val;
    int count;
    BstNode* left;
    BstNode* right;
    BstNode(int x) : val(x), count(0), left(NULL), right(NULL) {}
};

void BstInsert(BstNode* node, BstNode* node_insert, int &count_small)
{
    if (node->val >= node_insert->val) {
        node->count++;
        if (node->left != NULL) {
            BstInsert(node->left, node_insert, count_small);
        } else {
            node->left = node_insert;
        }
    } else {
        count_small += node->count + 1;
        if (node->right != NULL) {
            BstInsert(node->right, node_insert, count_small);
        } else {
            node->right = node_insert;
        }
    }
}
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int size = nums.size();
        if (size == 0) {
            return {};
        }
        vector<int> ans;
        ans.push_back(0);
        int count_small;
        BstNode* node = new BstNode(nums[size - 1]);
        for (int i = 1; i < size; ++i) {
            count_small = 0;
            BstInsert(node, new BstNode(nums[size - i - 1]), count_small);
            ans.push_back(count_small);
        }
        delete node;
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

