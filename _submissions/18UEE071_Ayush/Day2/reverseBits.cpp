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
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    unsigned int reverse(unsigned int A);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

unsigned int Solution::reverse(unsigned int A) 
{
    vector<int> arr;
    int n;
    while(A)
    {
        if(A&1==1) n =1;
        else n = 0;
        arr.push_back(n);
        A = A>>1;
    }
    
    unsigned int B=0;
    auto it = arr.begin();
    int i =31;
    for(;it!=arr.end();it++,i--)
    {
        B=B+ (*it * pow(2,i));
    }
    return B;
}

int main()
{
    fast_cin();
    return 0;
}
