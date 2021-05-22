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
    int solve(vector<vector<int>> &a);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

void recurse(vector<vector<int>> &arr, int i, int j, int currIslandNumber, int &currLength)
{
    int rows = arr.size();
    int cols = arr[0].size();

    if (i < 0 or i >= rows or j < 0 or j >= cols or arr[i][j] != 1)
    {
        return;
    }
    currLength++;
    arr[i][j] = currIslandNumber;

    vector<int> dx{-1, -1, 0, 1, 1, 1, 0, -1};
    vector<int> dy{0, 1, 1, 1, 0, -1, -1, -1};
    for (int k = 0; k < 8; k++)
    {
        recurse(arr, i + dx[k], j + dy[k], currIslandNumber, currLength);
    }
}

unordered_map<int, int> markDifferentLandMasses(vector<vector<int>> &arr)
{
    int rows = arr.size();
    int cols = arr[0].size();

    int currIslandNumber = 101;
    unordered_map<int, int> hashmap;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == 1)
            {
                int c = 0;
                recurse(arr, i, j, currIslandNumber, c);
                hashmap[currIslandNumber++] = c;
            }
        }
    }

    // print2DArray(arr);
    // printHashmap(hashmap);

    return hashmap;
}

int Solution::solve(vector<vector<int>> &arr)
{
    int rows = arr.size();
    if (!rows)
        return 0;
    int cols = arr[0].size();

    int max_ = 0;
    auto hashmap = markDifferentLandMasses(arr);

    for(auto it = hashmap.begin();it!=hashmap.end();it++)
    {
        max_ = max(max_, it->second);
    }
    return max_;
}

int main()
{
    fast_cin();

    return 0;
}
