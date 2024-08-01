class Solution {
public:
    int countQuadruplets(vector<int>& nums) {
        int counter = 0;
        int size = nums.size();

        for (int a = 0; a < size - 3; a++){
            for (int b = a + 1; b < size - 2; b++) {
                for (int c = b + 1; c < size - 1; c ++) {
                    for (int d = c + 1; d < size; d++) {
                        if (nums[a] + nums[b] + nums[c] == nums[d])
                            counter++;
                    }
                }
            }
        }
        
        return counter;
    }
};
