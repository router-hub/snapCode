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
    public:
    int sqrt(int A);
};
int Solution::sqrt(int A) 
{
    int low = 1;
    int high = A;
    int ans = 0;

    while(low<=high)
    {
        int mid = low + (high-low)/2;

        if(mid*mid == A)
            return mid;
        else if(mid*mid <A)
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    return ans;
}

int main()
{
    fast_cin();
    
    Solution s;
    cout<<s.sqrt(10)<<endl;
    cout<<s.sqrt(12)<<endl;
    cout<<s.sqrt(16)<<endl;
    return 0;
}
