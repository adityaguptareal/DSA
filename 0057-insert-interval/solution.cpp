class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {

        vector<vector<int>> res;

        int start1 = newInterval[0];
        int end1 = newInterval[1];

        for (int i = 0; i < intervals.size(); i++) {

            int start2 = intervals[i][0];
            int end2 = intervals[i][1];

         if (end2 < start1) {
                res.push_back({start2, end2});
            }

            else if (start2 > end1) {
                res.push_back({start1, end1});

                start1 = start2;
                end1 = end2;
            }

            else {
                start1 = min(start1, start2);
                end1 = max(end1, end2);
            }
        }

        res.push_back({start1, end1});

        return res;
    }
};
