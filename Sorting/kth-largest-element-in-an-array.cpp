class Solution {
public:
int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int largestElement=-1;
        int n = nums.size()-k;
        largestElement = nums[n];
        return largestElement;
    }
};
