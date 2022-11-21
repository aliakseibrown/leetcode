class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset<32> bits(n);
        int sum = 0;
        for(auto i: bits.to_string(char(0), char(1))) {
            if(i == 1) sum++;}
        return sum;
    }
};
