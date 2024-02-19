class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0) return false;
        bitset<32>a(n);
        if(a.count()==1)
            return true;
        return false;
    }
};