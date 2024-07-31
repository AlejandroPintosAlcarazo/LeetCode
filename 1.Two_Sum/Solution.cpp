class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int i = -1;
        while(++i < size) {
            int j = i;
            while (++j < size){
                if (nums[i] + nums[j] == target)
                    return {i, j};
            }
        }
        return {};
    }
};
