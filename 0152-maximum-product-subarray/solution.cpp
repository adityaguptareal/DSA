class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int result = nums[0];
        int maxEnd = nums[0];
        int minEnd = nums[0];
        if(nums.size()<2){
            return nums[0];
        }
        for (int i = 1; i < nums.size(); i++) {
            int val1=nums[i];
            int val2=nums[i]*maxEnd;
            int val3=nums[i]*minEnd;
            maxEnd=max(val1,max(val2,val3));
            minEnd=min(val1,min(val2,val3));
            result=max(result,max(minEnd,maxEnd));
        }
        if(result<0){
            return 0;
        }else{
            return result;
        }
        ;
    }
};
