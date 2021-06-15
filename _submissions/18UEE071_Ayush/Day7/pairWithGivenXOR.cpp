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
    int solve(vector<int> &arr, int k);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

string num2bin(int n)
{
    string str = "";
    while (n)
    {
        if (n & 1)
            str += "1";
        else
            str += "0";
        n = n >> 1;
    }
    reverse(str.begin(), str.end());
    return str;
}

int bin2num(string str)
{
    reverse(str.begin(), str.end());
    int powerOf2 = 0;
    int n = 0;
    for (auto x : str)
    {
        if (x == '1')
        {
            n += pow(2, powerOf2);
        }
        powerOf2++;
    }
    return n;
}

int findComplement(int k, int a)
{
    // a^b = k
    int b;
    string kBin = num2bin(k);
    string aBin = num2bin(a);

    string str = "";

    int l1 = kBin.size();
    int l2 = aBin.size();

    if (l1 > l2)
    {
        int diff = l1 - l2;

        while (diff--)
        {
            aBin.insert(0, "0");
        }
    }
    else
    {
        int diff = l2 - l1;

        while (diff--)
        {
            kBin.insert(0, "0");
        }
    }

    for (int i = 0; i < max(l1, l2); i++)
    {
        if (kBin[i] == '1')
        {
            str += aBin[i] == '1' ? "0" : "1";
        }
        else
        {
            str += aBin[i] == '1' ? "1" : "0";
        }
    }

    return bin2num(str);
}

int Solution::solve(vector<int> &arr, int k)
{
    int count = 0;
    unordered_set<int> hashset;
    for (auto x : arr)
    {
        int req = findComplement(k, x);
        if (hashset.count(req))
            count++;
        hashset.insert(x);
    }
    return count;
}

int main()
{
    fast_cin();

    Solution ob;
    vector<int> arr{5, 4, 10, 15, 7, 6};
    int k = 5;

    cout << ob.solve(arr, k) << endl;
    return 0;
}