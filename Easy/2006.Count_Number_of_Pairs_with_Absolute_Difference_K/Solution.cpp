class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int result = 0;
        int size = nums.size();

        for (int i = 0; i < size - 1; i++){
            for (int j = i + 1; j < size; j++) {
                if (nums[i] - nums[j] == k || nums[j] - nums[i] == k)
                    result++;
            }
        }
        return result;

    }
};
