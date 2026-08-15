class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int areaMax = INT_MIN;
        while (left < right) {
            int calulatedHeight = min(height[left], height[right]);
            int width = abs(right - left);
            int area = calulatedHeight * width;
            areaMax = max(areaMax, area);
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        return areaMax;
    }
};
