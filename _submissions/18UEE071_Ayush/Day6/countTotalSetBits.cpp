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
public:
    int solve(int n);
};

int Solution::solve(int n)
{
#define MOD 1000000007
    n++;

    int powerOf2 = 2;
    long long int cnt = n / 2;

    while (powerOf2 <= n)
    {
        int totalPairs = n / powerOf2;
        cnt += (totalPairs / 2) * powerOf2;
        cnt += (totalPairs & 1) ? (n % powerOf2) : 0;
        powerOf2 *=2;
    }

    return cnt%MOD;
}

int main()
{
    fast_cin();
    return 0;
}
