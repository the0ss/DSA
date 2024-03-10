class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1(begin(nums1),end(nums1)),s2(begin(nums2),end(nums2));
        vector<int>v;
        for(auto it:s1){
            if(s2.count(it))
                v.push_back(it);
        }
        return v;
    }
};