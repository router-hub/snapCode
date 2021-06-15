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
    int solve(vector<int> &a, vector<int> &b, vector<vector<int>> &c);
};

class UnionFind
{
    vector<int> parent;
    vector<int> rank;

public:
    void doUnion(int node1, int node2)
    {
        int parentOfNode1 = getParent(node1);
        int parentOfNode2 = getParent(node2);

        if (parentOfNode1 != parentOfNode2)
        {
            if (rank[parentOfNode1] < rank[parentOfNode2])
                swap(parentOfNode1, parentOfNode2);

            parent[parentOfNode2] = parentOfNode1;
            rank[parentOfNode1] += rank[parentOfNode2];
        }
    }

    int getParent(int node)
    {
        int curr = node;
        while (parent[node] != node)
        {
            node = parent[node];
        }
        parent[curr] = node;
        return parent[curr];
    }

    void makeSet(int n)
    {
        rank = vector<int>(n, 0);
        parent = vector<int>(n);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }
};

int Solution::solve(vector<int> &arr1, vector<int> &arr2, vector<vector<int>> &nodes)
{
    int n = arr1.size();
    UnionFind ob1;
    ob1.makeSet(n + 1);

    for (auto x : nodes)
    {
        ob1.doUnion(arr1[x[0] - 1], arr1[x[1] - 1]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] != arr2[i])
        {
            int p1 = ob1.getParent(arr1[i]);
            int p2 = ob1.getParent(arr2[i]);

            if (p1 != p2)
                return false;
        }
    }
    return true;
}

int main()
{

    return 0;
}
