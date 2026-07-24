class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minSum = nums[0];
        int maxSum = nums[0];
        int bestMinSum = nums[0];
        int bestMaxSum = nums[0];
        int result = nums[0];
      
        for (int i = 1; i < nums.size(); i++) {
            minSum = min(minSum + nums[i], nums[i]);
            bestMinSum = min(bestMinSum, minSum);
            maxSum = max(maxSum + nums[i], nums[i]);
            bestMaxSum = max(bestMaxSum, maxSum);
        }
        return max(abs(bestMinSum),bestMaxSum);
    }
};
