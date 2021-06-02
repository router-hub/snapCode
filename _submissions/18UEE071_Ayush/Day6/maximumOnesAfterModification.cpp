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
    int solve(vector<int> &a, int b);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

int Solution::solve(vector<int> &arr, int k)
{
    int ptr1 = 0;
    int ptr2 = 0;
    int max_ = 0;
    int l = arr.size();
    if (l <= 2)
        return l;

    int remaining = k;

    while (ptr2 < l)
    {
        while (ptr2 < l)
        {
            if (arr[ptr2])
            {
                ptr2++;
            }
            else
            {
                if (remaining > 0)
                {
                    remaining--;
                    ptr2++;
                }
                else
                {
                    break;
                }
            }
        }

        max_ = max( max_, ptr2 - ptr1 + (ptr2 >= l ? 0 : arr[ptr2] ? 1: 0) ) ;

        cout<<ptr1<<" "<<ptr2<<endl;

        while (ptr1 < ptr2)
        {
            while (!remaining)
            {
                if (arr[ptr1])
                    ptr1++;
                else
                {
                    remaining++;
                    ptr1++;
                }
            }
            if (remaining)
                break;
        }
    }

    return max_;
}

int main()
{
    Solution ob;

    vector<int> arr{0, 0, 0, 0, 0, 1, 1, 1, 1, 1};

    cout << ob.solve(arr,2) << endl;
}

