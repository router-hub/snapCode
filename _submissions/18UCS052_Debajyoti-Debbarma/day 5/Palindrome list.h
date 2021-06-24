/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 ListNode* traverse(ListNode*head,ListNode*current,int &count){
     
     if(current->next!=NULL){
       head=traverse(head,current->next,count);   
     }
     
     if(current->val==head->val)count++;
     return head->next;
     
 }
 
 
int Solution::lPalin(ListNode* A) {
    
    if(A->next==NULL || A==NULL){
        return 1;
    }
    
    ListNode* start=A;
    int totalNodes=0;
    
    while(start!=NULL){
        totalNodes++;
        start=start->next;
    }
    
    int count=0;
    traverse(A,A,count);
    if(count==totalNodes){
        return 1;
    }
    return 0;
    
}
