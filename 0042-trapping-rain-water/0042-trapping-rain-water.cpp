class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int tallest=0;
        int n=height.size();
        for(int i=1;i<n;i++)
            if(height[tallest]<height[i]) tallest=i;
        int tall=0;
        for(int i=0;i<tallest;i++){
            tall=max(tall,height[i]);
            ans+=tall-height[i];
        }
        tall=0;
        for(int i=n-1;i>tallest;i--){
            tall=max(tall,height[i]);
            ans+=tall-height[i];
        }
        return ans;
    }
};