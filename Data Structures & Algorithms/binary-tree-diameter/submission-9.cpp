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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root == NULL)
        return 0 ;

        int leftmax = maxheight(root -> left);
        int rightmax = maxheight(root -> right);
        int diameter = leftmax + rightmax ;

        int res = max( diameterOfBinaryTree(root -> left), diameterOfBinaryTree(root -> right));

        return max(diameter,res);
    }

    int maxheight(TreeNode*root)
    {
        if(root == NULL)
        return 0 ;

        return 1 + max(maxheight(root -> left), maxheight(root -> right));
    }
};
