class Solution {
public:
    vector<vector<int>>res;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> cur;
        backtrack(cur,nums,target,0);
        return res;
    }

    void backtrack(vector<int> & cur , vector<int>& nums , int target , int i)
    {
        if(target == 0)
        {
            res.push_back(cur);
            return ;
        }

        if(target < 0 || i >= nums.size())
        {
            return ;
        }

        cur.push_back(nums[i]);
        backtrack(cur,nums,target - nums[i],i);
        cur.pop_back();
         backtrack(cur,nums,target,i+1);

    }
};
