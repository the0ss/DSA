class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int ans=0;
        int l=0,r=n-1;
        while(l<r){
            int h=min(height[l],height[r]);
            ans=max(ans,(r-l)*h);
            while(height[l]<=h&&l<r)l++;
            while(height[r]<=h&&l<r)r--;
        }
        return ans;
    }
};