/*
DAY-1:
PROBLEM 7:SORT BINARY LINKED LIST
LINK:https://www.interviewbit.com/problems/sort-binary-linked-list/
*/
ListNode* Solution::solve(ListNode* A) 
{
    ListNode* temp=A;
    int lowerCount=0,higherCount=0;
    while(temp)
    {
        if(temp->val==0)
            lowerCount++;
        else
        {
            higherCount++;
        }
        temp=temp->next;
    }
    temp=A;
    while(lowerCount--)
    {
        temp->val=0;
        temp=temp->next;
    }
    while(higherCount--)
    {
        temp->val=1;
        temp=temp->next;
    }
    return A;
}
