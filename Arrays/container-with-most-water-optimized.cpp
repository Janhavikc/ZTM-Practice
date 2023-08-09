class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA =0;
        int p1=0, p2=height.size() -1;
        while(p1<p2){
            int h = min(height[p1], height[p2]);
            int w = p2-p1;
            int a = h*w;
            maxA=max(maxA, a);
            if(height[p1]<= height[p2]){
                p1++;
            }else{
                p2--;
            }
        }
        return maxA;
    }
};
