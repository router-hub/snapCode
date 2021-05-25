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
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    int candy(vector<int>& a);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}


int Solution::candy(vector<int> &arr)
{

    int l = arr.size();
    if (l == 0 or l == 1) return l;
    vector<int> left(l, 1);
    vector<int> right(l, 1);

    for (int i = 1; i < l; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            left[i] = left[i - 1] + 1;
        }
    }
    for (int i = l - 2; i >= 0; i--)
    {
        if (arr[i] > arr[i + 1])
        {
            right[i] = right[i + 1] + 1;
        }
    }
    int sum = 0;

    for (int i = 0; i < l; i++)
    {
        sum += max(left[i], right[i]);
    }
    //  cout<<sum;
    return sum;
}

int main()
{
    fast_cin();

    return 0;
}