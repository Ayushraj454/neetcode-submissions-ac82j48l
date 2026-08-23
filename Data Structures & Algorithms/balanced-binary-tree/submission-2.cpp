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

    int diffheight(TreeNode*root , int& diff)
    {
        if(root == NULL)
        {
            return 0 ;
        }

        int left = diffheight(root -> left , diff);
        int right = diffheight(root -> right , diff);

        diff = max(diff , abs(right - left));

        return max(left,right) + 1 ;
    }
    bool isBalanced(TreeNode* root) {
        
        int diff = 0 ;
        diffheight(root,diff);

        return diff <= 1 ;
    }
};
