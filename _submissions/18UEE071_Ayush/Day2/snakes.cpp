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
    int snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}
vector<vector<int>> generateGraph(vector<vector<int>> &ladders, vector<vector<int>> &snake)
{
    vector<vector<int>> graph(100);

    for (auto l : ladders)
    {
        graph[l[0] - 1].push_back(l[1] - 1);
    }
    for (auto s : snake)
    {
        graph[s[0] - 1].push_back(s[1] - 1);
    }

    return graph;
}

int solve(vector<vector<int>> &graph)
{
    vector<int> track(100, 0);
    queue<int> q;
    int ans = 0;

    q.push(0);
    track[0] = 1;
    bool reached = false;
    while (!q.empty())
    {
        int l = q.size();
        ans++;
        for (int i = 0; i < l; i++)
        {
            int curr = q.front();
            // cout<<"Curr :"<<curr<<endl;
            q.pop();

            if (curr == 99)
            {
                return ans-1;
            }

            for (int i = 1; i <= 6; i++)
            {
                int newPos = curr + i;
                if(newPos>99) continue;
                if (graph[newPos].size() > 0)
                {
                    newPos = graph[newPos][0];
                }

                if (track[newPos] == 0)
                {
                    track[newPos] = 1;
                    q.push(newPos);
                }
            }
        }
    }
    return -1;
}
int Solution::snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B)
{
    vector<vector<int>> graph = generateGraph(A, B);
    // cout<<"graphGenerated"<<endl;
    // print2DArray(graph);
    return solve(graph);
}

int main()
{
    // vector<vector<int>> a{{3,90}};
    // vector<vector<int>> b{{99,10},{97,20},{98,30},{96,40},{95,50},{94,60},{93,70}};

    // vector<vector<int>> a{{5, 66}, {9, 88}};
    // vector<vector<int>> b{{67, 8}};

    vector<vector<int>> a{{32,62}, {9, 88}};
    vector<vector<int>> b{{67, 8}};

    Solution s;
    cout << s.snakeLadder(a, b) << endl;
    return 0;
}