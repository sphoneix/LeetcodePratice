/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == NULL) {
            return 0;
        }
        TreeNode* p = root;
        stack<pair<TreeNode*, int>> s;
        int maxDeep = 0;
        int deep = 0;
        while (!s.empty() || p != NULL) {
            while(p != NULL) {
                ++deep;
                s.push(pair<TreeNode*, int>(p, deep));
                p = p->left;
            }
            p = s.top().first;
            deep = s.top().second;
            if (maxDeep < deep) {
                maxDeep = deep;
            }
            s.pop();
            p = p->right;
        }
        return maxDeep;
    }
};
// @lc code=end

