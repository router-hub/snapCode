/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::solve(ListNode* A, int B) {
    ListNode*temp=A;
    ListNode*curr=A;
    int size=0,count=0;
    while(temp)
    { size++;
        temp=temp->next;
    }
    int mid=(size/2)+1;
    if(B>=mid) return -1;
    count=mid-B;
    int ans=0;
    while(count)
    {  ans=curr->val;
        curr=curr->next;
        count--;
    }
    return ans;
}
