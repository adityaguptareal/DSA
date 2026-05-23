class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length=nums.size();
        int unique=1;
        int leftPointer=0;
        int rightPointer=1;
        while(rightPointer<length){
            if(nums[leftPointer]!=nums[rightPointer]){
                nums[leftPointer+1]=nums[rightPointer];
                leftPointer++;
                unique++;
            }
            rightPointer++;
        }
        return unique;
    }
};
