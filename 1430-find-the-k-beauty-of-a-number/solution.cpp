class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int low = 0;
        int answer = 0;
        string numString = to_string(num);
        for (int high = 0; high < numString.length(); high++) {
            if (high - low + 1 == k) {
                string subString = numString.substr(low, k);
                int value = stoi(subString);
                if (!value == 0 && num % value==0){
                    answer++;
                }
                low++;
            }
        }
        return answer;
    }
};
