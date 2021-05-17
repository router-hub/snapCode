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

bool touchTheCircles(vector<int> &A, vector<int> &B, int R, int x, int y)
{
    for (int i = 0; i < A.size(); i++)
    {
        double dist = sqrt(pow((x - A[i]), 2) + pow((y - B[i]), 2));
        if (dist <= (double)R)
            return 1;
    }

    return 0;
}
string solve(int x, int y, int n, int R, vector<int> &A, vector<int> &B)
{
    vector<int> dx = {-1, -1, 0, 1, 1, 1, 0, -1};
    vector<int> dy = {0, 1, 1, 1, 0, -1, -1, -1};

    queue<pair<int, int>> q;
    set<pair<int, int>> track;

    q.push({0, 0});

    while (!q.empty())
    {
        int l = q.size();

        for (int i = 0; i < l; i++)
        {
            auto curr = q.front();
            q.pop();

            track.insert(curr);
            int currX = curr.first;
            int currY = curr.second;

            if (currX == x and currY == y)
            {
                return "YES";
            }

            for (int i = 0; i < 8; i++)
            {
                int newX = currX + dx[i];
                int newY = currY + dy[i];
                if (newX > x or newY > y or newX < 0 or newY < 0)
                {
                    continue;
                }
                if (!track.count({newX, newY}))
                {

                    if (!touchTheCircles(A, B, R, newX, newY))
                    {
                        q.push({newX, newY});
                        track.insert({newX, newY});
                    }
                }
            }
        }
    }
    return "NO";
}

int main()
{
    fast_cin();

    int x = 41;
    int y = 67;
    int n = 5;
    int r = 0;
    vector<int> a{17, 16, 12, 0, 40};
    vector<int> b{52, 61, 61, 25, 31};

    cout << solve(x, y, n, r, a, b) << endl;

    return 0;
}
