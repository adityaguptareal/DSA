class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = INT_MIN;
        int left = 0;
        int right = height.size() - 1;
        while (left < right) {
            int high = min(height[left], height[right]);
            int width = abs(left - right);
            int area = high * width;
            maxWater = max(maxWater, area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return maxWater;
        
    }
};
