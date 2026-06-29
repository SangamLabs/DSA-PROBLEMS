class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if (nums.empty())
        {
            return -1;
        }

        int n = nums.size() + 1;

        int xor1{}, xor2{};

        for (int i{}; i < n - 1; ++i)
        {
            xor1 = xor1 ^ (i);
            xor2 = xor2 ^ nums[i];
        }
        xor1 = xor1 ^ n - 1;

        return xor1 ^ xor2;
    }
};