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
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    int t2Sum(TreeNode *root, int k);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

void recurse(TreeNode *root, TreeNode *ptr, int req, int &ans)
{
    if (!root or root == ptr or ans != 0)
        return;

    if (root->val == req)
    {
        ans = 1;
        return;
    }
    if (root->val > req)
        recurse(root->left, ptr, req, ans);
    else
        recurse(root->right, ptr, req, ans);
}
void inOrder(TreeNode *root, int k, int &ans, TreeNode *og)
{
    if (!root or ans != 0)
        return;

    int curr = root->val;
    recurse(og, root, k - curr, ans);

    inOrder(root->left, k, ans, og);
    inOrder(root->right, k, ans, og);
}
int Solution::t2Sum(TreeNode *root, int k)
{
    int ans = 0;
    inOrder(root, k, ans, root);
    return ans;
}

int main()
{
    fast_cin();

    Solution s;

    return 0;
}
