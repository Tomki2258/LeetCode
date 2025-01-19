/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        vector<vector < int>> values;
    void levelOrderRec(TreeNode *root, int level, vector<vector < int>> &values)
    {
        if (root == nullptr) return;

        if (values.size() <= level)
            values.push_back( {});

        values[level].push_back(root->val);

        levelOrderRec(root->left, level + 1, values);
        levelOrderRec(root->right, level + 1, values);
    }
    vector<vector < int>> levelOrder(TreeNode *root)
    {
        vector<vector < int>> values;
        levelOrderRec(root, 0,values);

        return values;
    }
};