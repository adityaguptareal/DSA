class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) {
            return 0;
        }
        int low = 0;
        int product = 1;
        int high = 0;
        int totalCount = 0;
        for (high = 0; high < nums.size(); high++) {
            product *= nums[high];
            while (product >= k) {
                product = product / nums[low];
                low++;
            }
            totalCount += (high - low + 1);
        }
        return totalCount;
    }
};
