class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = nums[0];
        int maxSum = nums[0];
        int minSum = nums[0];
        int currMax = nums[0];
        int currMin = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            totalSum += nums[i];
            currMax = max(currMax + nums[i], nums[i]);
            maxSum = max(currMax, maxSum);

            currMin = min(currMin + nums[i], nums[i]);
            minSum = min(minSum, currMin);
        }
        if (maxSum < 0)
    return maxSum;
        return max(maxSum, totalSum - minSum);
    }
};
