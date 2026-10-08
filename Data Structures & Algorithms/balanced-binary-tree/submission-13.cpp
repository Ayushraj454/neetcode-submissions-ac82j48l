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
    bool isBalanced(TreeNode* root) {
        
        int diff = 0 ;
        heightdiff(root,diff);

        return diff <= 1 ;
    }

    int heightdiff(TreeNode*node , int& diff)
    {
        if(node == NULL)
        return 0 ;
    
    int left = heightdiff(node -> left , diff);
    int right = heightdiff(node -> right , diff);
    diff = max(diff , abs(right - left));

    return max(left , right) + 1 ;
    }
};
