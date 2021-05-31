/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    ListNode* head=A;
    int c1=0,c0=0;
    while(head!=NULL)
    {
        if(head->val==1)
         c1++;
         else
         c0++;
         
         head=head->next;
    }
    
    head=A;
     while(head!=NULL)
    {
               if(c0!=0)
                 {  head->val=0;
                     c0--;}
               else
                head->val=1;
       
         
         head=head->next;
    }
    return A;
}
