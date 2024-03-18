bool cmp(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(begin(points),end(points),cmp);
        int ans=1;
        int arrowPosi=points[0][1];
        int n=points.size();
        for(int i=1;i<n;i++){
            if(arrowPosi>=points[i][0])
                continue;
            ans++;
            arrowPosi=points[i][1];
        }
        return ans;
    }
};