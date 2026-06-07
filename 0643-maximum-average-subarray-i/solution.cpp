class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int low = 0;
        double maxAvg = INT_MIN;
        double sum = 0;
        for (int high = 0; high < nums.size(); high++) {
            sum += nums[high];
            if (high - low + 1 == k) {
                int length = high - low + 1;
                maxAvg = max(maxAvg, sum / length);
                sum -= nums[low];
                low++;
            }
        }
        return maxAvg;
    }
};
