class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int low = 0;
        int answer = INT_MIN;
        unordered_map<int, int> freq;

        for (int high = 0; high < fruits.size(); high++) {
            freq[fruits[high]]++;
            while(freq.size()>2){
                freq[fruits[low]]--;
                low++;
                if(freq[fruits[low-1]]==0){
                    freq.erase(fruits[low-1]);
                }
            }
            if(freq.size()==2 or freq.size()<2){
                answer=max(answer,high-low+1);
            }
        }
        return answer;
    }
};
