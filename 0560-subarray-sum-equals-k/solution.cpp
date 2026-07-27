class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int result = 0;
        unordered_map<int, int> freq;
        freq[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int question = sum - k;
            int frequency = freq[question];
            result+=frequency;
            freq[sum]++;
        }
        return result;
    }
};
