/*
DAY-2:
PROBLEM 9:COMBINATION SUM
LINK:https://www.interviewbit.com/problems/combination-sum/
*/

void search(const vector<int>& A, int index, int target, vector<int> current, vector<vector<int>>& ans) {
    if (target == 0) ans.push_back(current);
    
    for (auto i = index; i < A.size(); ++i) {
        if (A[i] > target) break;

        current.push_back(A[i]);
        search(A, i, target - A[i], current, ans);
        current.pop_back();
    }
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    A.erase(unique(A.begin(), A.end()), A.end());
    
    vector<vector<int>> ans;
    search(A, 0, B, {}, ans);
    return ans;
}

