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

void inOrder(TreeNode *root, vector<int> &arr)
{
    if (root == NULL)
        return;
    inOrder(root->left, arr);
    arr.push_back(root->val);
    inOrder(root->right, arr);
}

vector<int> recoverTree(TreeNode *root)
{
    vector<int> arr;
    inOrder(root, arr);

    int ptr1 = 0;
    bool f1 = false;
    int ptr2 = 0;
    bool f2 = false;
    int ptr3 = 0;
    int l = arr.size();

    for (ptr1 = 0; ptr1 < l - 1; ptr1++)
    {
        if (arr[ptr1] > arr[ptr1 + 1])
        {
            f1 = true;
            break;
        }
    }
    for (ptr2 = ptr1 + 2; ptr2 < l; ptr2++)
    {
        if (arr[ptr2] < arr[ptr2 - 1])
        {
            f2 = true;
            break;
        }
    }
    if (!f2)
    {
        ptr2 = ptr1 + 1;
    }
    vector<int> out{arr[ptr1], arr[ptr2]};
    sort(out.begin(), out.end());
    return out;
}

int main()
{
    fast_cin();

    return 0;
}
