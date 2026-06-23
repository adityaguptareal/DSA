class Solution {
public:
    bool valid(vector<int>& have, vector<int>& needed) {
        int answer = true;
        for (int i = 0; i < 256; i++) {
            if (have[i] < needed[i]) {
                answer = false;
            }
        }
        return answer;
    }
    string minWindow(string s, string t) {

        int low = 0;
        int high = 0;
        int m = s.length();
        int n = t.length();
        int result = INT_MAX;
        int start = -1;
        vector<int> have(256, 0);
        vector<int> needed(256, 0);
        if (m < n) {
            return "";
        }
        for (int i = 0; i < n; i++) {
            needed[t[i]]++;
        }
        for (high = 0; high < m; high++) {
            have[s[high]]++;
            while (valid(have, needed)) {
                int length = high - low + 1;
                if (result > length) {
                    result = length;
                    start = low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if (result == INT_MAX) {
            return "";
        }
        return s.substr(start, result);
    }
};
