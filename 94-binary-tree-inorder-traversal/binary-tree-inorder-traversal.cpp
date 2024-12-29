/*
 * @lc app=leetcode id=94 lang=cpp
 *
 * [94] Binary Tree Inorder Traversal
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> values;
    void print(TreeNode* node){
        if(node == nullptr){
            return;
        }

        print(node->left);

        cout << node->val << " ";
        values.push_back(node->val);
        print(node->right); 
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *currentNode = root;
        print(currentNode);
        return values;
    }
};
// @lc code=end

