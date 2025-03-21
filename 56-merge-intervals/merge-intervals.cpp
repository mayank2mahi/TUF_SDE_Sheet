class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int n = intervals.size(); 
    sort(intervals.begin(), intervals.end());   // if not sorted, sort it
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        if (ans.empty() || intervals[i][0] > ans.back()[1]) {
            ans.push_back(intervals[i]);
        }
        else {
            ans.back()[1] = max(ans.back()[1], intervals[i][1]);
        }
    }
    return ans;
    }
};

// intervals[i][0] ==== start of current interval
// an.back()[1]  === end of last merged interval