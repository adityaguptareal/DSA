class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int result = nums[0];
        int bestEnding = nums[0];
        if (nums.size() < 1) {
            return 0;
        }
        for (int i = 1; i < nums.size(); i++) {
            int val1 = nums[i];
            int val2=nums[i]+bestEnding;
            bestEnding=max(val1,val2);
            result=max(result,bestEnding);
        }
        return result;
    }
};
