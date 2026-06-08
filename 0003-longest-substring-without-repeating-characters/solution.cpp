class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int low = 0;
        int answer = 0;
        unordered_map<char, int> freq;
        for (int high = 0; high < s.length(); high++) {
            freq[s[high]]++;
            int length = high - low + 1;
            while (freq.size() < length) {
                freq[s[low]]--;
                low++;
                if (freq[s[low - 1]] == 0) {
                    freq.erase(s[low - 1]);
                }
                length = high - low + 1;
            }
            answer = max(answer, high - low + 1);
        }
        return answer;
    }
};
