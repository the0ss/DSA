class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int count[]={0,0};
        int n=students.size();
        for(auto it:students)
            count[it]++;
        int i;
        for(i=0;i<n&&count[sandwiches[i]];i++)
            count[sandwiches[i]]--;
        return n-i;
            
    }
};