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

int usingBFS(pair<int,int> p1, pair<int,int> p2)
{
    int x1 = p1.first;
    int y1 = p1.second;

    int x2 = p2.first;
    int y2 = p2.second;
    int ans = -1;
    queue<pair<int,int>> q;
    set<pair<int,int>> hashset;

    q.push(p1);

    vector<int> dx = {-1,-1,0,1,1,1,0,-1};
    vector<int> dy = {0,1,1,1,0,-1,-1,-1};

    while(!q.empty())
    {
        int qSize = q.size();
        ans++;
        for(int i=0;i<qSize;i++)
        {
            auto curr = q.front();
            q.pop();

            if(curr.first == x2 and curr.second == y2)
            {
                return ans;
                break;
            }

            hashset.insert(curr);

            for(int delta = 0;delta<8;delta++)
            {
                int newX = curr.first + dx[delta];
                int newY = curr.second + dy[delta];

                if(hashset.find({newX, newY}) == hashset.end())
                {
                    q.push({newX, newY});
                    hashset.insert({newX, newY});
                }

            }
        }
    }
    return -1;

}

int usingSimple(vector<int> &arr1, vector<int> &arr2)
{
    int l = arr1.size();
    int ans = 0;

    for(int i=0;i<l-1;i++)
    {
        int srcX = arr1[i];
        int srcY = arr2[i];
        int dstX = arr1[i+1];
        int dstY = arr2[i+1];

        ans+=max(abs(dstX-srcX), abs(dstY-srcY));
    }
    return ans;
}

int coverPoints(vector<int> &A, vector<int> &B) 
{
    int l = A.size();
    if(l==0 or l == 1)  return 0;
    
    return usingSimple(A,B);

    int ans = 0;
    for(int i=0;i<l-1;i++)
    {
        int srcX = A[i];
        int srcY = B[i];
        int dstX = A[i+1];
        int dstY = B[i+1];

        ans+=usingBFS({srcX, srcY}, {dstX, dstY});
    }
    return ans;
}
int main()
{
    fast_cin();

    pair<int,int> p1 = {0,0};
    pair<int,int> p2 = {4,3};

    cout<<minimumSteps(p1, p2)<<endl;
    return 0;
}
