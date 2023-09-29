class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2, -1);
        int n = nums.size();
        int left =0, right = n-1;
        int start = INT_MAX, end=0;
        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                int foundTarget=mid;
                while(foundTarget>=0 && nums[foundTarget]==target){
                    foundTarget--;
                }
                ans[0] = foundTarget+1;
                foundTarget=mid;
                 while(foundTarget<n && nums[foundTarget]==target){
                    foundTarget++;
                }
                ans[1] = foundTarget-1;
                return ans;
            }else if(nums[mid]<target){
                left = mid+1;
            }else if(nums[mid]>target){
                right = mid-1;
            }
        }
        ans[0] = start!=INT_MAX?start:-1;
        ans[1]=end!=0?end:-1;
        return ans;
    }
};
