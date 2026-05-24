class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        int start=0;
        int end=nums.size()-1;
        while(start<=end){
            if(abs(nums[start])>=abs(nums[end])){
                result.push_back(nums[start]*nums[start]);
                start++;
            }else{
                result.push_back(nums[end]*nums[end]);
                end--;
            }
        }
        // reverse
        int i=0;
        int j=result.size()-1;
        while(i<j){
            swap(result[i],result[j]);
            i++;
            j--;
        }
        
    return result;
    }
};
