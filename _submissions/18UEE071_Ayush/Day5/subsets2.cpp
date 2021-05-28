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

vector<vector<int>> mothership;

void subset(vector<int> arr, int i, vector<int> temp)
{
    if (i == arr.size() - 1)
    {
        sort(temp.begin(), temp.end());
        mothership.push_back(temp);
        sort(temp.begin(), temp.end());
        temp.push_back(arr[i]);
        mothership.push_back(temp);
        return;
    }
    vector<int> t = temp;
    t.push_back(arr[i]);

    subset(arr, i + 1, temp);
    subset(arr, i + 1, t);
}
vector<vector<int>> subsetsWithDup(vector<int> &arr)
{
    if (arr.size() == 0)
    {
        vector<vector<int>> t;
        return t;
    }
    mothership.clear();
    sort(arr.begin(), arr.end());
    vector<int> temp;
    subset(arr, 0, temp);

    mothership.erase(unique(mothership.begin(), mothership.end()), mothership.end());
    sort(mothership.begin(), mothership.end());
    mothership.erase(unique(mothership.begin(), mothership.end()), mothership.end());
    sort(mothership.begin(), mothership.end());

    vector<vector<int>> out = mothership;
    mothership.clear();
    return out;
}

int main()
{
    fast_cin();

    return 0;
}