class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int result = -1;
        int min_val = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > min_val) {
                result = max(result, nums[i] - min_val);
            }
            min_val = min(min_val, nums[i]);
        }
        
        return result;
    }
};

