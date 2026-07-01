class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty())
        {
            return {};
        }
        int n = nums.size();
        if (nums.size() == 1) {
            return nums[0];
        }
        int max_sum{nums[0]};
        int sum{nums[0]};
        
        for (int i{1}; i < n; ++i)
        {
            if (sum < 0) {
                sum = nums[i];
            } else {
                sum += nums[i];
            }
            max_sum = max(max_sum, sum);
        }
        return max_sum;
    }
};