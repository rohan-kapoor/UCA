class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> bits(32,0);
        for(int i : nums){
            for(int j = 0; j < 32; j++){
                bits[j] += (i & 1);
                i >>= 1;
            }
        }
        for(int i = 0; i < 32; i++){
            bits[i] %= 3;
        }
        int ans = 0;
        for(int i = 31; i >= 0; i--){
            ans <<= 1;
            ans |= bits[i];
        }
        return ans;
    }
};