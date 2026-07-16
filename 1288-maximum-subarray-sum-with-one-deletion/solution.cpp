class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int oneDelete = INT_MIN;
        int result = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            int prevNoDelete = noDelete;
            int prevOneDelete = oneDelete;
            noDelete = max(noDelete + arr[i], arr[i]);
            if (prevOneDelete == INT_MIN) {
                oneDelete=prevNoDelete;
            }else{
            oneDelete=max(prevOneDelete+arr[i],prevNoDelete);
            }
            result=max(result,max(noDelete,oneDelete));
        }
        return result;
    }
};
