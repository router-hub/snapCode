/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::solve(ListNode* A) {
    
    ListNode* head0=NULL;
    ListNode* head1=NULL;
    ListNode* prev=NULL;
    ListNode* last=NULL;
    for(ListNode* curr=A;curr!=NULL;curr=curr->next){
        int x=curr->val;
        
        if(x==0){
            
            if(head0==NULL){
            head0=new ListNode(x);
            prev=head0;
            
            }
            else{
                
                prev->next=new ListNode(x);
                prev=prev->next;
            }
            
            
        }
        
        else{
            if(head1==NULL){
            head1=new ListNode(x);
            last=head1;
            
            }
            
            else{
                last->next=new ListNode(x);
                last=last->next;
            }
            
            
        }
    }
    
    
    if(head0==NULL)
    return head1;
    
    if(head1==NULL)
    return head0;
    
    if(head0!=NULL && head1!=NULL)
    {
        prev->next=head1;
        return head0;
    }
    
    else
    return NULL;
}
