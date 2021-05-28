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
    int paint(int A, int B, vector<int> &arr);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

class Painter
{
#define MOD 10000003

private:
    vector<int> prefixSum;
    int COST;
    void generatePrefixSum(vector<int> &arr)
    {
        prefixSum.push_back(arr[0]);

        for(int i=1;i<arr.size();i++)
        {
            prefixSum.push_back(prefixSum[prefixSum.size()-1] + arr[i]);
        }
    }
    int getSumInArr(vector<int> &arr, int start, int end)
    {
        if(prefixSum.size() == 0)
            generatePrefixSum(arr);
        
        if(start == 0)
            return prefixSum[end];
        return prefixSum[end] - prefixSum[start];
    }

    int recurse(int n, int k, vector<int> &arr)
    {
        if(k == 1)
        {
            int totalToBeCovered = getSumInArr(arr, 0, arr.size()-1);
            return totalToBeCovered*COST;
        }
        if(n == 1)
        {
            return arr[0]*COST;
        }
        int minAns = INT_MAX;

        for(int i=1;i<=n;i++)
        {
            int result = max(recurse(i, k-1, arr), getSumInArr(arr, i, n-1)*COST);
            minAns = min(minAns, result);
        }
        return minAns;
    }
public:
    int solve(int n, int k, vector<int> &arr)
    {
        int l = arr.size();
        COST = k;

        return recurse(arr.size(), n, arr);
    }
};


#define MOD 10000003
bool isPossible(vector<int> &arr, int limitCap, int painters)
{
    int count = 1;
    int currentSum = 0;
    int ptr = 0;
    int l = arr.size();
    while (ptr < l)
    {
        currentSum += arr[ptr];

        if (currentSum > limitCap)
        {
            count++;
            currentSum = 0;
            if (count > painters)
                return 0;
        }
        else
        {
            ptr++;
        }
    }
    return 1;
}

int boolAllotmentWay(vector<int> &arr, int painters, int cost)
{
    int sum = 0;
    for(auto x: arr)
        sum+=(x%MOD);

    int start = 0;
    int end = sum;
    int ans = INT_MAX;
    while (start<=end)
    {
        int mid = start%MOD + ((end-start)%MOD)/2;

        if(isPossible(arr, mid, painters))
        {
            ans = min(ans, mid);
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return (ans*cost)%MOD;
}

int Solution::paint(int n, int k, vector<int> &arr)
{
    Painter p;
    return boolAllotmentWay(arr, n, k);
    // return p.solve(n, k, arr);
}

int main()
{
    fast_cin();
    return 0;
}