/*
 * @lc app=leetcode.cn id=315 lang=cpp
 *
 * [315] 计算右侧小于当前元素的个数
 */

// @lc code=start
// BST
// struct BstNode {
//     int val;
//     int count;
//     BstNode* left;
//     BstNode* right;
//     BstNode(int x) : val(x), count(0), left(NULL), right(NULL) {}
// };

// void BstInsert(BstNode* node, BstNode* node_insert, int &count_smaller)
// {
//     if (node->val >= node_insert->val) {
//         node->count++;
//         if (node->left != NULL) {
//             BstInsert(node->left, node_insert, count_smaller);
//         } else {
//             node->left = node_insert;
//         }
//     } else {
//         count_smaller += node->count + 1;
//         if (node->right != NULL) {
//             BstInsert(node->right, node_insert, count_smaller);
//         } else {
//             node->right = node_insert;
//         }
//     }
// }

// class Solution {
// public:
//     vector<int> countSmaller(vector<int>& nums) {
//         if (nums.size() == 0) {
//             return {};
//         }
//         vector<int> ans;
//         ans.push_back(0);
//         BstNode* node = new BstNode(nums[nums.size() - 1]);
//         for (int i = 1; i < nums.size(); ++i) {
//             int count_smaller = 0;
//             BstInsert(node, new BstNode(nums[nums.size() - i - 1]), count_smaller);
//             ans.push_back(count_smaller);
//         }
//         delete node;
//         reverse(ans.begin(), ans.end());
//         return ans;
//     }
// };
// 归并排序
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> ans;
        vector<pair<int, int>> num;
        for (int i = 0; i < nums.size(); ++i) {
            ans.push_back(0);
            num.push_back(make_pair(nums[i], i));
        }
        merge_sort(num, ans);
        return ans;
    }
    void merge_sort(vector<pair<int, int>>& vec, vector<int>& count)
    {
        if (vec.size() < 2) {
            return;
        }
        int mid = vec.size() / 2;
        vector<pair<int, int>> sub_vec1;
        vector<pair<int, int>> sub_vec2;
        for (int i = 0; i < mid; ++i) {
            sub_vec1.push_back(vec[i]);
        }
        for (int i = mid; i < vec.size(); ++i) {
            sub_vec2.push_back(vec[i]);
        }
        merge_sort(sub_vec1, count);
        merge_sort(sub_vec2, count);
        vec.clear();
        merge(sub_vec1, sub_vec2, vec, count);
    }
    void merge(vector<pair<int,int>>& sub_vec1,vector<pair<int,int>>& sub_vec2, vector<pair<int,int> >& vec, vector<int>& count)
    {
        int i = 0;
        int j = 0;
        while (i < sub_vec1.size() && j < sub_vec2.size()) {
            if (sub_vec1[i].first <= sub_vec2[j].first) {
                vec.push_back(sub_vec1[i]);
                count[sub_vec1[i].second] += j;
                ++i;
            } else {
                vec.push_back(sub_vec2[j]);
                ++j;
            }
        }
        for (; i < sub_vec1.size(); ++i) {
            vec.push_back(sub_vec1[i]);
            count[sub_vec1[i].second] += j;
        }
        for (; j < sub_vec2.size(); ++j) {
            vec.push_back(sub_vec2[j]);
        }
    }
};
// @lc code=end

