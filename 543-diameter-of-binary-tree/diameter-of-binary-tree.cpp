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
    int depth(TreeNode* root){
        if (root==NULL) return 0;

        int lh=depth(root->left);
        int rh=depth(root->right);

        return 1+max(lh,rh);
    }
    int maxi=0;
    int diameterOfBinaryTree(TreeNode* root) {
        if (root==NULL) return 0;

        int leftheight=depth(root->left);
        int rightheight=depth(root->right);

        maxi=max(maxi,leftheight+rightheight);

        //traverse the tree
        diameterOfBinaryTree(root->left);
        diameterOfBinaryTree(root->right);
        return maxi;
    }
};