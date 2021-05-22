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
public:
    Solution(/* args */);
    ~Solution();
    string longestCommonPrefix(vector<string> &arr);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

string Solution::longestCommonPrefix(vector<string> &arr)
{
    int l = arr.size();
    if (l == 0)
        return 0;
    if (l == 1)
        return arr[0];

    string minString = arr[0];

    for (auto x : arr)
    {
        if (x.size() < minString.size())
            minString = x;
    }

    for (auto x : arr)
    {
        int commonLength = 0;
        while (minString[commonLength] == x[commonLength])
        {
            commonLength++;
        }
        minString = minString.substr(0, commonLength);
    }
    return minString;
}

int main()
{
    fast_cin();

    Solution s;
    vector<string> arr{"abcdef", "ab", "abcdfasd"};
    cout << s.longestCommonPrefix(arr) << endl;

    return 0;
}
