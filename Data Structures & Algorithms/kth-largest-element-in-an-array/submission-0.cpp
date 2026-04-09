class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int> maxheap(nums.begin(), nums.end());

    // Pop (k-1) largest elements
    for (int i = 1; i < k; i++) {
        maxheap.pop();
    }

    // The top element is now the k-th largest
    return maxheap.top();
}

};
