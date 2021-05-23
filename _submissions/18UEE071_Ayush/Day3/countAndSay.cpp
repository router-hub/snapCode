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
    string countAndSay(int n);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

string getNext(string prev)
{
    int l = prev.size();
    string out = "";
    char currentChar = prev[0];
    int ptr = 0;

    while (ptr < l)
    {
        currentChar = prev[ptr];
        int count = 0;
        while (ptr < l and prev[ptr] == currentChar)
        {
            ptr++;
            count++;
        }

        out += (to_string(count));
        out.push_back(currentChar);
    }
    cout << "GET : " << out << endl;
    return out;
}

string Solution::countAndSay(int n)
{
    if (n == 1)
    {
        return "1";
    }
    if (n == 2)
    {
        return "11";
    }
    string lastVal = "11";
    string ans = "";
    for (int i = 3; i <= n; i++)
    {
        ans = getNext(lastVal);
        lastVal = ans;
    }
    return ans;
}

int main()
{
    fast_cin();

    Solution s;

    cout << s.countAndSay(3) << endl;
    return 0;
}
