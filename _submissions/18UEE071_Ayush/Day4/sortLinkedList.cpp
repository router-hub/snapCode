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
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
private:
    /* data */
public:
    Solution(/* args */);
    ~Solution();
    ListNode *sortList(ListNode *head);
};

Solution::Solution(/* args */)
{
}

Solution::~Solution()
{
}

ListNode *merge(ListNode *l, ListNode *r)
{
    ListNode *temp = new ListNode(-1);
    ListNode *head = temp;
    ListNode *left = l;
    ListNode *right = r;

    while (left and right)
    {
        if (left->val <= right->val)
        {
            temp->next = left;
            left = left->next;
            temp = temp->next;
        }
        else
        {
            temp->next = right;
            right = right->next;
            temp = temp->next;
        }
    }
    while (left)
    {
        temp->next = left;
        left = left->next;
        temp = temp->next;
    }
    while (right)
    {
        temp->next = right;
        right = right->next;
        temp = temp->next;
    }

    return head->next;
}
ListNode *Solution::sortList(ListNode *head)
{

    int l = 0;
    if (!head or !head->next)
        return head;
    ListNode *ptr1 = head;
    while (ptr1)
    {
        l++;
        ptr1 = ptr1->next;
    }

    ptr1 = head;
    for (int i = 0; i < (l / 2) - 1; i++)
    {
        ptr1 = ptr1->next;
    }
    ListNode *ptr2 = ptr1->next;
    ptr1->next = NULL;

    ListNode *left = sortList(head);
    ListNode *right = sortList(ptr2);

    return merge(left, right);
}


int main()
{
    fast_cin();

    return 0;
}