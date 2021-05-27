// #  a^b = c
// #  bln(a) = ln(c)
// #  b = ln(c)/ln(a)

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

int Solution::isPower(int A)
{
    if (A == 1)
        return 1;
    double logV = log(A);
    for (int i = 2; i < A; i++)
    {
        double b = logV / log(i);
        if (floor(b) == b)
            return 1;
    }

    return 0;
}

int main()
{
    fast_cin();

    int arr[] = {1, 2, 3, 4};
    swap(arr[0], arr[1]);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
