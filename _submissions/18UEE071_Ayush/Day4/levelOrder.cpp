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

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
private:
public:
    Solution();
    ~Solution();
    vector<vector<int>> levelOrder(TreeNode *root);
};

Solution::Solution()
{
}

Solution::~Solution()
{
}

vector<vector<int>> Solution::levelOrder(TreeNode *root)
{
    vector<vector<int>> mothership;
    if (!root)
    {
        return mothership;
    }

    int c = 0;
    queue<TreeNode *> q1;
    queue<TreeNode *> q2;
    q1.push(root);
    q2.push(root);

    while (!q1.empty() or !q2.empty())
    {
        vector<int> temp;

        if (c % 2 == 0)
        {

            while (!q1.empty())
            {
                TreeNode *current = q1.front();
                temp.push_back(current->val);
                q1.pop();

                if (current->left)
                {
                    q2.push(current->left);
                }
                if (current->right)
                {
                    q2.push(current->right);
                }
            }
        }

        else
        {

            while (!q2.empty())
            {
                TreeNode *current = q2.front();
                temp.push_back(current->val);
                q2.pop();

                if (current->left)
                {
                    q1.push(current->left);
                }
                if (current->right)
                {
                    q1.push(current->right);
                }
            }
        }
        mothership.push_back(temp);

        c++;
    }

    return mothership;
}

int main()
{
    fast_cin();

    return 0;
}