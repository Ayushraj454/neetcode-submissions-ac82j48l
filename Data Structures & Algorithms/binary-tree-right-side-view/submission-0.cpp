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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(root == NULL)
        return ans;
        queue<TreeNode*>q;

        q.push(root);
        while(q.empty() != true)
        {
            int n = q.size();
            bool flag = 1;

            for(int i = 0 ; i < n ; i++)
            {
                TreeNode*ptr = q.front();
                q.pop();

                if(flag == 1)
                {
                    ans.push_back(ptr-> val);
                    flag = 0;
                }

                if(ptr -> right != nullptr)
                q.push(ptr-> right);

                if(ptr -> left != nullptr )
                q.push(ptr -> left);
            }
        }
        return ans;
        
    }
};