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

int anagram(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    return a == b;
}
int recurse(string S1, string S2)
{
    if (S1.length() != S2.length())
    {
        return false;
    }

    int n = S1.length();

    if (n == 0)
    {
        return true;
    }

    if (S1 == S2)
    {
        return true;
    }

    if (!anagram(S1, S2))
        return 0;

    for (int i = 1; i < n; i++)
    {
        if (recurse(S1.substr(0, i), S2.substr(0, i)) && recurse(S1.substr(i, n - i),
                                                                 S2.substr(i, n - i)))
        {
            return true;
        }

        if (recurse(S1.substr(0, i),
                    S2.substr(n - i, i)) &&
            recurse(S1.substr(i, n - i),
                    S2.substr(0, n - i)))
        {
            return true;
        }
    }
    return false;
}
int Solution::isScramble(const string A, const string B)
{
    return recurse(A, B);
}

int main()
{
    fast_cin();

    vector<vector<int>> arr{
        {3, 3, 3, 3, 0, 0, 3, 0}, {1, 3, 3, 3, 3, 3, 3, 2}, {3, 3, 0, 3, 0, 3, 3, 3}, {3, 3, 3, 0, 0, 3, 3, 0}, {0, 3, 3, 3, 3, 3, 3, 3}, {0, 0, 0, 3, 3, 0, 3, 3}, {0, 3, 0, 3, 3, 3, 3, 0}, {3, 3, 3, 0, 3, 3, 3, 3}};

    Solution ob;
    cout << ob.is_Possible(arr) << endl;
    return 0;
}
