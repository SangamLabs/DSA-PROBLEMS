class Solution {
public:
    void sortColors(vector<int>& nums) {
        if (nums.empty())
        {
            return ;
        }
        int n = nums.size();

        int low{}, mid{}, high{n - 1};

        while(mid<=high)
        {
            if (nums[mid] == 0)
            {
                swap(nums[low], nums[mid]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(nums[high], nums[mid]);
                high--;
            }
        }
        
    }
};