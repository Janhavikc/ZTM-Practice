//TC: O(N^2) SC:O(N)
class Solution {
public:
    int trap(vector<int>& height) {
        int totalWater=0, n=height.size();

        for(int p=0; p<n; p++){
            int leftPtr =p, rightPtr=p, maxLeft=0, maxRight=0;
            while(leftPtr>=0){
                maxLeft=max(maxLeft, height[leftPtr]);
                leftPtr--;
            }
            while(rightPtr<n){
                maxRight=max(maxRight, height[rightPtr]);
                rightPtr++;
            }
            int currentWater = min(maxLeft, maxRight) - height[p];
            if(currentWater>=0){
                totalWater+=currentWater;
            }
        }
        return totalWater;
    }
};
