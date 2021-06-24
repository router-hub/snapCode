/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    int count=0,size=0;
    ListNode*curr=A;
    ListNode*prev=NULL;
    if(A==NULL ||B==0)
    return A;
    while(curr)
    {size++;
    curr=curr->next;
    }
    if(B>=size)
    {
        A=A->next;
        return A;
    }
    count=size-B;
    curr=A;
    while(count)
    { prev=curr;
    curr=curr->next;
        count--;
    }
    if(B==1)
    {delete curr;
    prev->next=NULL;
    return A;
    }
    prev->next=curr->next;
    delete curr;
    return A;
}
