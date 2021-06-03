/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    
       ListNode* ptr=A;
int n=0;
while(ptr!=NULL)
{
n++;
ptr=ptr->next;
}
ptr=A;
int x=n/2;
while(x--)
{
ptr=ptr->next;
}
ListNode *cur=ptr;
ListNode *next=NULL,*prev=NULL;

while(cur!=NULL)
{
next=cur->next;
cur->next=prev;
if(next==NULL)break;
prev=cur;
cur=next;
}
int ok=1;
x=n/2;
while(x--)
{
if(A->val!=cur->val)return 0;
A=A->next;
cur=cur->next;
}
return 1;
    
}
