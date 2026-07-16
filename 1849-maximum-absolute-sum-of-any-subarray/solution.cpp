class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int maxSum = nums[0];
        int minSum = nums[0];
        int bestMinSum = nums[0];
        int bestMaxSum = nums[0];

        int result = nums[0];
        for (int i = 1; i < nums.size(); i++) {

            maxSum = max(maxSum + nums[i], nums[i]);
            bestMaxSum = max(bestMaxSum, maxSum);
            minSum = min(minSum + nums[i], nums[i]);
            bestMinSum = min(bestMinSum, minSum);
        }

        return max(abs(bestMaxSum), abs(bestMinSum));
    }
};
