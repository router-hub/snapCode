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

int threeSumClosest(vector<int> &arr, int x)
{

    sort(arr.begin(), arr.end());
    long long int ans = INT_MAX;

    for (int i = 0; i < arr.size() - 2; i++)
    {
        int ptr1 = i + 1, ptr2 = arr.size() - 1;
        while (ptr1 < ptr2)
        {
            auto sum = arr[i] + arr[ptr1] + arr[ptr2];
            if (abs(x - sum) < abs(x - ans))
            {
                ans = sum;
            }
            if (sum > x)
            {
                ptr2--;
            }
            else
            {
                ptr1++;
            }
        }
    }

    return ans;
}

int main()
{
    fast_cin();

    return 0;
}
