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
    int solve(int a, int b, vector<string> &arr);
};

// int Solution::solve(int rows, int cols, vector<string> &arr)
// {
//     vector<vector<int>> ds(rows, vector<int>(cols, INT16_MAX));

//     vector<int> dx{-1, 0, 1, 0};
//     vector<int> dy{0, 1, 0, -1};
//     vector<char> dd{'L', 'R', 'U', 'D'};
//     unordered_map<char, pair<int, int>> hashmap;
//     hashmap['L'] = {0, -1};
//     hashmap['R'] = {0, 1};
//     hashmap['U'] = {-1, 0};
//     hashmap['D'] = {1, 0};

//     queue<vector<int>> q;
//     ds[0][0] = 0;

//     q.push(vector<int>{0, 0, 0});

//     while (!q.empty())
//     {
//         int l = q.size();

//         for (int i = 0; i < l; i++)
//         {
//             auto curr = q.front();
//             q.pop();

//             int currX = curr[0];
//             int currY = curr[1];
//             int currD = curr[2];

//             int nX = currX + hashmap[arr[currX][currY]].first;
//             int nY = currY + hashmap[arr[currX][currY]].second;

//             if (nX >= 0 and nX < rows and nY >= 0 and nY < cols)
//             {
//                 if (ds[nX][nY] > currD)
//                 {
//                     ds[nX][nY] = currD;
//                     q.push(vector<int>{nX, nY, currD});
//                 }
//             }

//             for (int k = 0; k < 4; k++)
//             {
//                 if (make_pair(dx[k], dy[k]) == hashmap[arr[currX][currY]])
//                     continue;
//                 int newX = currX + dx[k];
//                 int newY = currY + dy[k];

//                 if(newX<0 or newX>=rows or newY<0 or newY>=cols)
//                     continue;

//                 if(ds[newX][newY] > currD +1)
//                 {
//                     ds[newX][newY] = currD + 1;
//                     q.push(vector<int> {newX, newY, ds[newX][newY]});
//                 }
//             }
//         }
//     }

//     // print2DArray(ds);

//     return ds[rows-1][cols-1];
// }

int solve(int rows, int cols, vector<string> &arr)
{
    vector<vector<int>> ds(rows, vector<int>(cols, INT16_MAX));

    priority_queue<pair<int, pair<int, int>>> pq;
    ds[0][0] = 0;
    

    pq.push(make_pair(0, make_pair(0,0)));

    vector<int> dx{-1, 0, 1, 0};
    vector<int> dy{0, 1, 0, -1};

    unordered_map<char, pair<int, int>> hashmap;
    hashmap['L'] = {0, -1};
    hashmap['R'] = {0, 1};
    hashmap['U'] = {-1, 0};
    hashmap['D'] = {1, 0};

    set<pair<int, int>> visited;

    

    while (!pq.empty())
    {
        auto curr = pq.top();
        pq.pop();

        int currX = curr.second.first;
        int currY = curr.second.second;
        if (visited.count({currX, currY}))
            continue;
        visited.insert({currX, currY});
        


        for (int i = 0; i < 4; i++)
        {
            int x = dx[i];
            int y = dy[i];
            int newX = currX + x;
            int newY = currY + y;

            if (newX < 0 or newX >= rows or newY < 0 or newY >= cols)
                continue;

            if (make_pair(x, y) == hashmap[arr[currX][currY]])
            {
                if (ds[newX][newY] > abs(curr.first))
                {
                    ds[newX][newY] = abs(curr.first);
                    pq.push({-curr.first, {newX, newY}});
                }
            }
            else
            {
                if (ds[newX][newY] > abs(curr.first) + 1)
                {
                    ds[newX][newY] = abs(curr.first) + 1;
                    pq.push({-(abs(curr.first) + 1), {newX, newY}});
                }
            }
        }
    }

    // print2DArray(ds);

    return ds[rows - 1][cols - 1];
}

int main()
{
    fast_cin();

    vector<string> arr{"RRR","DDD","UUU"};
    // vector<string> arr{"LLLL"};
    int r = arr.size();
    int c = arr[0].size();

    Solution ob;
    solve(r, c, arr);
    return 0;
}