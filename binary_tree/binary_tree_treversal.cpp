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
    vector<int> PreOrderTraversalByIteration(TreeNode* root)
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
    vector<int> PreOrderTraversalByRecursion(TreeNode* root)
    {
        vector<int> ans;
        PreOrderRecursive(root, ans);
        return ans;
    }
private:
    void PreOrderRecursive(TreeNode* root, vector<int>& ans)
    {
        if (root == NULL) {
            return;
        }
        ans.push_back(root->val);
        PreOrderRecursive(root->left, ans);
        PreOrderRecursive(root->right, ans);
    }
};

class InOrder {
public:
    vector<int> InOrderTraversalByIteration(TreeNode* root)
    {
        stack<TreeNode* > treeNodes;
        vector<int> ans;
        TreeNode* temp = root;
        while (temp || treeNodes.size()) {
            while (temp) {
                treeNodes.push(temp);
                temp = temp->left;
            }
            temp = treeNodes.top();
            treeNodes.pop();
            ans.push_back(temp->val);
            temp = temp->right;
        }
        return ans;
    }

    vector<int> InOrderTraversalByRecursion(TreeNode* root)
    {
        vector<int> ans;
        InOrderRecursive(root, ans);
        return ans;
    }
private:
    void InOrderRecursive(TreeNode* root, vector<int>& ans)
    {
        if (root == NULL) {
            return;
        }
        InOrderRecursive(root->left, ans);
        ans.push_back(root->val);
        InOrderRecursive(root->right, ans);
    }
};