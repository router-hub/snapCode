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

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *partition(ListNode *A, int B)
{
    ListNode *head1 = new ListNode(-1);
    ListNode *head2 = new ListNode(-1);

    ListNode* temp1 = head1;
    ListNode* temp2 = head2;
    ListNode* temp = A;

    while (temp)
    {
        if(temp->val < B)
        {
            temp1->next = temp;
            temp1 = temp1->next;
        }
        else
        {
            temp2->next = temp;
            temp2 = temp2->next;
        }
        temp = temp->next;
    }
    temp1->next = head2->next;
    temp2->next = NULL;
    return head1->next;
}

int main()
{
    fast_cin();

    return 0;
}
