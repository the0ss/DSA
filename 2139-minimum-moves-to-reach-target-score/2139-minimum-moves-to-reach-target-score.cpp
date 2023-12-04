class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int minMoves = 0;
        while (target > 1) {
            if (maxDoubles == 0) {
                minMoves += target - 1;
                break;
            }
            if (target % 2 == 0) {
                target = target / 2;
                maxDoubles--;
            } else {
                target--;
            }
            minMoves++;
        }
        return minMoves;
    }
};