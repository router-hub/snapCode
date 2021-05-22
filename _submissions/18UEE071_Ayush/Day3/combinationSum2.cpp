#include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define getT() \
    int t;     \
    cin >> t;  \
    while (t--)
#define lli long long int
#define pii pair<int, int>
#define endl '\n'
#define printArr(arr)     \
    for (auto x : arr)    \
        cout << x << " "; \
    cout << endl;
#define printHashmap(hashmap)                                  \
    for (auto it = hashmap.begin(); it != hashmap.end(); it++) \
    {                                                          \
        cout << it->first << " " << it->second << endl;        \
    }
#define print2DArray(arr)     \
    for (auto x : arr)        \
    {                         \
        for (auto c : x)      \
            cout << c << " "; \
        cout << endl;         \
    }

// _______________________________________________________________________________________________________________________________________________________________________________
// _______________________________________________________________________________________________________________________________________________________________________________
// _______________________________________________________________________________________________________________________________________________________________________________

class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    vector<vector<int>> combinationSum(vector<int> &arr, int b);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

void recurse(vector<int> &arr, int index, vector<int> temp, int currentSum, int requiredSum, vector<vector<int>> &out)
{
    if (index == arr.size() - 1)
    {
        if (currentSum == requiredSum)
        {
            out.push_back(temp);
        }
        if (currentSum + arr[index] == requiredSum)
        {
            temp.push_back(arr[index]);
            out.push_back(temp);
        }
        return;
    }
    recurse(arr, index + 1, temp, currentSum, requiredSum, out);
    temp.push_back(arr[index]);
    recurse(arr, index + 1, temp, currentSum + arr[index], requiredSum, out);
}
vector<vector<int>> Solution::combinationSum(vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end());
    int index = 0;
    vector<int> temp;
    int currentSum = 0;
    int requiredSum = B;
    vector<vector<int>> out;

    recurse(A, index, temp, currentSum, requiredSum, out);

    sort(out.begin(), out.end());
    out.erase(unique(out.begin(), out.end()), out.end());

    return out;
}

int main()
{
    fast_cin();

    Solution s;
    vector<int> arr{5, 17, 100, 11};
    int b = 4;
    cout << s.books(arr, b) << endl;
    return 0;
}
