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
    int braces(string S);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}
bool containsExpression(char ch)
{
    return ch == '+' or ch == '-' or ch == '*' or ch == '/';
}
int Solution::braces(string str)
{
    int l = str.size();
    if (l == 0)
        return 0;

    int count = 0;
    vector<bool> arr(10e5 + 1, false);
    int p = 0;
    int ptr = 0;

    while (ptr < l)
    {
        if (str[ptr] == '(')
        {
            count++;
            p++;
        }
        else if (containsExpression(str[ptr]))
        {
            arr[p] = true;
            
        }
        else if(str[ptr] == ')')
        {
            if(arr[p])
            {
                arr[p] = false;
                p--;
            }
            else
            {
                return 1;
            }
            count--;
        }
        ptr++;
    }
    return 0;
}

int main()
{
    fast_cin();

    Solution s;
    string str = "a+b";

    cout<<s.braces(str)<<endl;
    return 0;
}
