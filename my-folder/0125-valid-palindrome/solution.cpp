class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.size();
        string filteredString;
        for (int i =0 ; i < size; i++){
            if(isalnum(s[i])){
                filteredString+=tolower(s[i]);
            }
        }
        int left = 0;
        int right = filteredString.size() - left - 1;

        while(left < right){
            if(filteredString[left]!=filteredString[right]){
                return false;
            }
            left++;
            right--;
           
        };
            return true;
    };
};
