class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> inserted;
        bool insertion = false;
        for (int i = 0; i < intervals.size(); i++) {
            if (intervals[i][0] > newInterval[0] && insertion == false) {
                inserted.push_back(newInterval);
                insertion = true;
            }
            inserted.push_back(intervals[i]);
        }
        if (insertion == false) {
            inserted.push_back(newInterval);
        }
        vector<vector<int>> res;
        int start1 = inserted[0][0];
        int end1 = inserted[0][1];
        for (int i = 0; i < inserted.size(); i++) {
            int start2 = inserted[i][0];
            int end2 = inserted[i][1];
            if (end1 >= start2) {
                start1 = start1;
                end1 = max(end1, end2);
            }else{

            res.push_back({start1, end1});
            start1 = start2;
            end1 = end2;
            }
        }
        res.push_back({start1, end1});
        
    return res;
    }
};
