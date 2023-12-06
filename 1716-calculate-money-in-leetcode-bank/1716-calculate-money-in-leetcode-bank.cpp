class Solution {
public:
    int totalMoney(int n) {
        int total=0;
        for(int i=1,daily=0,weekCnt=0;i<n+1;i++){
            if(i%7==1){
                weekCnt++;
                daily=weekCnt;
            }
            else
                daily++;
            total+=daily;
        }
        return total;
    }
};