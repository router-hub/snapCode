/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * Solution::mergeTwoLists
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) 
{

    ListNode* result = NULL;  
      
    /* Base cases */
    if (a == NULL)  
        return(b);  
    else if (b == NULL)  
        return(a);  
      
    /* Pick either a or b, and recur */
    if (a->val <= b->val)  
    {  
        result = a;  
        result->next = Solution::mergeTwoLists(a->next, b);  
    }  
    else
    {  
        result = b;  
        result->next = Solution::mergeTwoLists(a, b->next);  
    }  
    return(result);  
 
}
