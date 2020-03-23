#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr);
};

class PreOrder {
public:
    vector<int> preOrderTraversalByIteration(TreeNode* root)
    {
        stack<TreeNode* > stackOfNode;
        vector<int> ans;
        if (root != NULL) {
            stackOfNode.push(root);
        }
        TreeNode* tmp;
        while (!stackOfNode.empty()) {
            tmp = stackOfNode.top();
            stackOfNode.pop();
            ans.emplace_back(tmp->val);
            if (tmp->right != NULL) {
                stackOfNode.push(tmp->right);
            }
            if (tmp->left != NULL) {
                stackOfNode.push(tmp->left);
            }
        }
        return ans;
    }
    vector<int> preOrderTraversalByRecursion(TreeNode* root)
    {
        vector<int> ans;
        preOrder(root, ans);
        return ans;
    }
private:
    void preOrder(TreeNode* root, vector<int>& ans)
    {
        if (root == NULL) {
            return;
        }
        ans.push_back(root->val);
        preOrder(root->left, ans);
        preOrder(root->right, ans);
    }
}