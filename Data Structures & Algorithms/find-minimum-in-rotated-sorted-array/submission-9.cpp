class Solution {
public:
    int findMin(vector<int> &nums) {
        
        int l = 0 ;
        int r = nums.size() - 1;
        int res = nums[0];

        while(l <= r)
        {
            // base case if first number is smaller than the last one 

            if(nums[l] < nums[r])
            {
                res = min(res,nums[l]);
                break ;
            }

            // calculate mid 

            int mid = l + (r - l)/ 2 ;
            res = min(res,nums[mid]);

            if(nums[mid] >= nums[l])
            {
                l = mid + 1 ;
            }

            else {

                r = mid - 1 ;
            }
        }

        return res ;
    }
};
