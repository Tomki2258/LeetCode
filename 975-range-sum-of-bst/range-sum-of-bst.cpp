/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    int sum = 0;
    public:
        void TreeSum(TreeNode *node, int low, int high)
        {
            if (node == nullptr)
            {
                return;
            }

            TreeSum(node->left, low, high);
            if(node->val > high) return;

            if (node->val >= low && node->val <= high)
            {
                std::cout << node->val << "\n";
                sum += node->val;
            }
            

            TreeSum(node->right, low, high);
        }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        TreeSum(root, low, high);
        return sum;
    }
};