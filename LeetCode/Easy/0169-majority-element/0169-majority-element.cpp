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
        /* Checking if the stored element
         is the majority element*/
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == candidate) {
                cnt1++;
            }
        }
        
        //return element if it is a majority element
        if (cnt1 > (nums.size() / 2)) {
            return candidate;
        }
        
        //return -1 if no such element found
        return -1;
    }
};