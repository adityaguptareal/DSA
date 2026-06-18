class Solution {
public:
    int characterReplacement(string s, int k) {
        int low = 0;
        int high = 0;
        int result = INT_MIN;
        vector<int> freq(256, 0);
        for (high = 0; high < s.length(); high++) {
            freq[s[high]]++;
            int length = high - low + 1;
            int maxValue = *max_element(freq.begin(), freq.end());
            int diff = abs(maxValue - length);
            while (diff > k) {
                freq[s[low]]--;
                low++;
                length = high - low + 1;
                maxValue = *max_element(freq.begin(), freq.end());
                diff = abs(maxValue - length);
            }
            result = max(result, high - low + 1);
        }
        return result;
    }
};
