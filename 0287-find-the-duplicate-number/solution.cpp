class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 0;
        int high = 1;
        sort(nums.begin(), nums.end());
        while (low != high && low <= nums.size() && high <= nums.size()) {
            if (nums[low] == nums[high]) {
                return nums[low];
            }
            low++;
            high++;
        }
        return {};
    }
};
