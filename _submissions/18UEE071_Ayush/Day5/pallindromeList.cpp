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
struct ListNode
{
    int val;
    ListNode *next;
};

class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    int lPalin(ListNode *root);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

ListNode *reverse(ListNode *root)
{
    ListNode *head = root;
    ListNode *next = NULL;
    ListNode *prev = NULL;

    while (head != NULL)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }

    return prev;
}

int Solution::lPalin(ListNode *root)
{
    ListNode *head = root;
    ListNode *tail = root;
    int l = 0;
    while (tail != NULL)
    {
        l += 1;
        tail = tail->next;
    }
    tail = root;

    if (l % 2 != 0)
    {

        for (int i = 0; i < (int)((l + 1) / 2); i++)
        {
            tail = tail->next;
        }

        tail = reverse(tail);

        int flag = 1;

        while (tail != NULL)
        {
            if (tail->val != head->val)
            {
                flag = 0;
                break;
            }
            tail = tail->next;
            head = head->next;
        }
        return flag;
    }

    else
    {
        for (int i = 0; i < (int)((l) / 2); i++)
        {
            tail = tail->next;
        }

        tail = reverse(tail);

        int flag = 1;

        while (tail != NULL)
        {
            if (tail->val != head->val)
            {
                flag = 0;
                break;
            }
            tail = tail->next;
            head = head->next;
        }
        return flag;
    }
}

int main()
{
    fast_cin();

    int arr[] = {1, 2, 3, 4};
    swap(arr[0], arr[1]);
    for (int i = 0; i < 4; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
