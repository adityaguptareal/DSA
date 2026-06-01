class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum = 0;
        int result = INT_MAX;
        int low = 0;
        int high = 0;
        while (high < nums.size()) {
            sum = sum + nums[high];
            while (sum >= target) {
                int length = high - low + 1;
                result = min(length, result);
                sum = sum - nums[low];
                low++;
            }
            high++;
        }
        if(result==INT_MAX){
            return 0;
        }
        return result;
    }
};
