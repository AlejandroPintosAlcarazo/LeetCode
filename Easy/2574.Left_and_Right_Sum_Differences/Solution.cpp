class Solution {
public:
  vector<int> leftRightDifference(vector<int> &nums) {
    vector<int> result(nums.size(), 0);
    int size = nums.size();
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < size; i++) {
      int rightSum = totalSum - leftSum - nums[i];
      result[i] = abs(leftSum - rightSum);
      leftSum += nums[i];
    }
    return result;
  }
};
