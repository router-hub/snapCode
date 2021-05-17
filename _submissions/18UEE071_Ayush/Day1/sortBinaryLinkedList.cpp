/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) 
{
    ListNode* zeroHead = new ListNode(-1);
    ListNode*  temp1 = zeroHead;
    ListNode* oneHead = new ListNode(-1);
    ListNode*  temp2 = oneHead;
    
    if(!A or !A->next) return A;
    ListNode*  temp = A;
    while(temp)
    {
        if(temp->val == 1)
        {
            temp2->next = temp;
            temp2 = temp2->next;
        }
        else
        {
            temp1->next = temp;
            temp1 = temp1->next;
        }
        temp = temp->next;
    }
    temp1->next = oneHead->next;
    temp2->next = NULL;
    return zeroHead->next;
}
