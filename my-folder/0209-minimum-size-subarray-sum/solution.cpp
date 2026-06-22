class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int answer = INT_MAX;
        int low = 0;
        int high = 0;
        int sum = 0;

        for (high = 0; high < nums.size(); high++) {
            sum += nums[high];
            while (sum >= target) {
                int length = high - low + 1;
                answer = min(length, answer);
                sum -= nums[low];
                low++;
            }
        }
        if (answer == INT_MAX) {
            return answer = 0;            
        }
        return answer;
    }
};
