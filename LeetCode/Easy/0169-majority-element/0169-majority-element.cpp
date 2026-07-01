class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate{}, count{};

        for (int i{}; i < nums.size(); ++i)
        {
            if (count == 0)
            {
                candidate = nums[i];
                count++;
            }
            else if (nums[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return candidate;
    }
};