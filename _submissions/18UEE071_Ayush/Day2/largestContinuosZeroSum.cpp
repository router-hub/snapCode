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
    vector<int> lszero(vector<int> &A);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}
vector<int> Solution::lszero(vector<int> &arr)
{
    unordered_map<int, int> hashmap;
    hashmap[0] = -1;
    int sum = 0;
    int l = arr.size();
    int start_index = 0;
    int end_index = 0;
    int max_length = 0;
    for (int i = 0; i < l; i++)
    {
        sum += arr[i];

        if (hashmap.find(sum) != hashmap.end())
        {
            int diff = i - hashmap[sum];
            if (diff > max_length)
            {
                start_index = hashmap[sum] + 1;
                // cout<<arr[start_index];
                end_index = i;
                max_length = diff;
            }
        }
        else
        {
            hashmap[sum] = i;
        }
    }

    vector<int> out;
    for (int i = start_index; i <= end_index; i++)
    {
        out.push_back(arr[i]);
    }
    if (out.size() == 1 and out[0] != 0)
        out.clear();
    return out;
}

int main()
{
    fast_cin();

    return 0;
}
