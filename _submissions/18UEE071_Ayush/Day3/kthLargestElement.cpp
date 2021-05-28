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
    vector<int> solve(vector<int> &arr, int k);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

vector<int> Solution::solve(vector<int> &arr, int k)
{
    int l = arr.size();

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (auto x : arr)
    {
        minHeap.push(x);
        if (minHeap.size() > k)
            minHeap.pop();
    }

    vector<int> out;

    while (!minHeap.empty())
    {
        out.push_back(minHeap.top());
        minHeap.pop();
    }
    return out;
}

int main()
{
    fast_cin();

    Solution s;
    return 0;
}
