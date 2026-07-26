class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int firstMax = INT_MIN;
        int secondMax = INT_MIN;
        int thirdMax = INT_MIN;
    long long result = 1;
    int minFirst=INT_MAX;
    int minSecond=INT_MAX;
    
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > firstMax) {
                thirdMax = secondMax;
                secondMax = firstMax;
                firstMax = nums[i];
            } else if (nums[i] > secondMax) {
                thirdMax = secondMax;
                secondMax = nums[i];
            } else if (nums[i] > thirdMax) {
                thirdMax = nums[i];
            }
            if(nums[i]<minFirst){
                minSecond=minFirst;
                minFirst=nums[i];
            }
            else if(nums[i]<minSecond){
                minSecond=nums[i];
            }
        }
        result=max(firstMax * secondMax * thirdMax,firstMax*minFirst*minSecond);
        return result;
    }
};
