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
// #define pii pair<int, int>
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
    vector<vector<int>> mothership;
    int k;
    void __init__(int K)
    {
        mothership.clear();
        k = K;
    }
    void removeDuplicate()
    {
        sort(mothership.begin(), mothership.end());
        mothership.erase(unique(mothership.begin(), mothership.end()), mothership.end());
    }

    void recurse(vector<int> &arr, int index, vector<int> temp, int currentSum)
    {
        if (currentSum > k)
        {
            return;
        }
        if (currentSum == k)
        {
            mothership.push_back(temp);
            return;
        }

        temp.push_back(arr[index]);
        recurse(arr, index + 1, temp, currentSum + arr[index]);
        
        recurse(arr, index, temp, currentSum + arr[index]);
        
    }

public:
    Solution(/* args */);
    ~Solution();
    vector<vector<int>> combinationSum(vector<int> &arr, int K)
    {
        __init__(K);
        sort(arr.begin(), arr.end());

        vector<int> temp;
        recurse(arr, 0, temp, 0);
        removeDuplicate();

        return mothership;
    }
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

int main()
{
    fast_cin();
    vector<int> arr{8, 10, 6, 11, 1, 16, 8};
    int k = 28;
    Solution s;

    auto ans = s.combinationSum(arr, k);
    print2DArray(ans);
    return 0;
}
