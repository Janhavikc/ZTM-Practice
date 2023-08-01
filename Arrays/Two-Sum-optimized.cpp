//TC: O(n) SC: O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>diff;
        for(int i=0;i<nums.size();i++){
            if(diff.count(nums[i])>0){
                int numberIndex = diff[nums[i]];

                return {numberIndex, i};
            }else{
                int numberToFind = target-nums[i];
                diff[numberToFind] = i;
            }
        }

        return {};
    }
};
