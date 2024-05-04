class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i,j;
        sort(people.rbegin(),people.rend());
        for(j=people.size()-1,i=0;i<=j;i++){
            if(people[i]+people[j]<=limit)j--;
        }
        return i;
    }
};