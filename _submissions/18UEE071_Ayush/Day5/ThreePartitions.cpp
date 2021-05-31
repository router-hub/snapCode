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

int solve(int l, vector<int> &arr) 
{
    if(l<3) return 0;
    int sum = 0;
    for(auto x: arr) sum+=x;
    
    if(sum%3!=0) return 0;
    int eachPart = sum/3;
    vector<int> flags(l, 0);
    sum=0;
    for(int i=l-1;i>=0;i--)
    {
        sum+=arr[i];
        if(sum == eachPart)
        {
            flags[i] = 1;
        }
    }
    for(int i=l-2;i>=0;i--)
    {
        flags[i]+=flags[i+1];
    }
    
    sum = 0;
    int ans = 0;
    for(int i=0;i<l-2;i++)
    {
        sum+=arr[i];
        if(sum == eachPart)
            ans+=flags[i+2];
    }
    return ans;
    
}


int main()
{
    fast_cin();

    return 0;
}
