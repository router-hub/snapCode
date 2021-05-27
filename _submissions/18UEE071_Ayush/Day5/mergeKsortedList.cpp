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

ListNode* merge2List(ListNode* node1, ListNode* node2)
{
    ListNode* head = new ListNode(-1);
    ListNode* temp = head;
    while (node1 and node2)
    {
        if(node1->val <= node2->val)
        {
            temp->next = node1;
            temp = temp->next;
            node1 = node1->next;
        }
        else
        {
            temp->next = node2;
            temp = temp->next;
            node2 = node2->next;
        }
    }

    while (node1)
    {
        temp->next = node1;
        temp = temp->next;
        node1 = node1->next;
    }

    while (node2)
    {
        temp->next = node2;
        temp = temp->next;
        node2 = node2->next;
    }
    
    return head->next;
    
}
ListNode* mergeKLists(vector<ListNode *> &arr)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(arr.size() == 0) return NULL;
    if(arr.size()==1)
    {
        return arr[0];
    }

    ListNode* ptr = merge2List(arr[0], arr[1]);

    for(int i=2;i<arr.size();i++)
    {
        ptr = merge2List(ptr, arr[i]);
    }
    return ptr;
}

int main()
{
    fast_cin();

    return 0;
}
