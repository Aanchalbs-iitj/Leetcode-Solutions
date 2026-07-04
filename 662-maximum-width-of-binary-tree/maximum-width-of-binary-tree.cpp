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
    int widthOfBinaryTree(TreeNode* root) {
        if (root==NULL) return 0;
        long long ans=0;
        queue<pair<TreeNode* , long long>> q;
        q.push({root,0});
        while(!q.empty()){
            int size=q.size();
            long long mmin=q.front().second;//to get the min idx of every level for subtracting
            long long first,last;
            for (int i=0;i<size;i++){
                long long curr_idx=q.front().second-mmin;
                TreeNode* node=q.front().first;
                q.pop();
                //store first and last to find the width of each level
                if(i==0) first=curr_idx;
                if(i==size-1) last=curr_idx;
                //for 0 based indxing
                if (node->left) q.push({node->left,curr_idx*2+1});
                if (node->right) q.push({node->right,curr_idx*2+2});
            }
            ans=max(ans,last-first+1);
        }
        return ans;
    }
};