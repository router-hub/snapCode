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
    int mice(vector<int> &mice, vector<int> &holes)
    {

    }
};

int Solution::mice(vector<int> &mice, vector<int> &holes) 
{
    int l1 = mice.size();
    int l2 = holes.size();

    if(l2<l1)
        return -1;
    
    
    sort(mice.begin(), mice.end());
    sort(holes.begin(), holes.end());

    int time = 0;

    for(int i=0;i<l1;i++)
    {
        time = max(time, abs(mice[i] - holes[i]));
    }

    return time;
}


int main()
{
    fast_cin();

    return 0;
}


