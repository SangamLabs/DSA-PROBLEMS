class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.empty())
        {
            return -1;
        }

        int n = nums.size();

        int max_consecutive{};
        int count{};

        for (int i{}; i < n; ++i)
        {
            if (nums[i] == 1)
            {
                count++;
                max_consecutive = max(max_consecutive, count);
            }
            else
            {
                count = 0;
            }
        }
        return max_consecutive;
    }
};