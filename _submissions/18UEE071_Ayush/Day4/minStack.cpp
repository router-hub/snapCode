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

class MinStack
{
private:
    /* data */
public:
    MinStack(/* args */);
    ~MinStack();
    void push(int x);
    void pop();
    int top();
    int getMin();
};

MinStack::~MinStack()
{
}

vector<pair<int, int>> v;
MinStack::MinStack()
{
    v.clear();
}
void MinStack::push(int x)
{
    int tempmin;
    if (v.empty())
        v.push_back({x, x});
    else
    {
        v.push_back({x, min(v.back().second, x)});
    }
}

void MinStack::pop()
{
    if (!v.empty())
        v.pop_back();
}

int MinStack::top()
{
    if (v.empty())
        return -1;
    return v.back().first;
}

int MinStack::getMin()
{
    if (v.empty())
        return -1;
    return v.back().second;
}

int main()
{
    fast_cin();

    return 0;
}
