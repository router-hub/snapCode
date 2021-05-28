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

class BSTIterator
{
private:
    /* data */
public:
    BSTIterator(/* args */ TreeNode *root);
    ~BSTIterator();
    bool hasNext();
    int next();
};

BSTIterator::~BSTIterator()
{
}

queue<int> q;

void inorder(TreeNode *root)
{
    if (!root)
        return;
    inorder(root->left);
    q.push(root->val);
    inorder(root->right);
}

BSTIterator::BSTIterator(TreeNode *root)
{
    while (!q.empty())
    {
        q.pop();
    }
    
    inorder(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext()
{
    return !q.empty();
}

/** @return the next smallest number */
int BSTIterator::next()
{
    int value = q.front();
    q.pop();
    return value;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */

int main()
{
    fast_cin();

    return 0;
}