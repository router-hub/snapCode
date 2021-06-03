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

vector<int> solve(vector<int> &arr1, vector<int> &arr2, int k)
{
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    priority_queue<vector<int>> maxHeap;

    maxHeap.push(vector<int>{arr1.back() + arr2.back(), (int)arr1.size() - 1, (int)arr2.size() - 1});

    vector<int> out;
    set<pair<int, int>> track;
    while (out.size() != k)
    {
        auto top = maxHeap.top();
        maxHeap.pop();

        out.push_back(top[0]);

        int index1 = top[1];
        int index2 = top[2];
        if (track.count({index1 - 1, index2}) == 0)
        {
            maxHeap.push(vector<int>{arr1[index1 - 1] + arr2[index2], index1 - 1, index2});
            track.insert({index1 - 1, index2});
        }
        if (track.count({index1, index2 - 1}) == 0)
        {
            maxHeap.push(vector<int>{arr1[index1] + arr2[index2 - 1], index1, index2 - 1});
            track.insert({index1, index2 - 1});
        }
    }
    return out;
}

int main()
{
    fast_cin();
    return 0;
}
