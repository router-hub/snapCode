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
    int bulbs(vector<int> &arr);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}
int Solution::bulbs(vector<int> &arr)
{
    int l = arr.size();
    if (!l)
        return 0;
    if (l == 1)
        return !(arr[0] == 1);

    int ptr = 0;
    while (arr[ptr])
        ptr++;

    bool reversed = 0;
    int count = 0;
    while (ptr < l)
    {
        if (!reversed)
        {
            count++;
            while (ptr < l and !arr[ptr])
            {
                ptr++;
            }
            reversed = 1;
        }
        else
        {
            count++;    
            while (ptr<l and arr[ptr])
            {
                ptr++;
            }
            reversed = 0;
        }
    }

    return count;
}

int main()
{
    fast_cin();
    
    return 0;
}
