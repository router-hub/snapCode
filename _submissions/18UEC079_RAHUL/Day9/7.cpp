/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    
     ListNode* temp=A;
    int c=0;
    while(temp!=NULL)
    {
        c++;
        temp=temp->next;
    }
    if(B>=c)
    {
        ListNode* temp1=A;
        temp1=temp1->next;
        A->next=NULL;
        delete(A);
        return temp1;
    }
     ListNode* m=A;
      ListNode* r=A;
      for(int i=0;i<B;i++)
      {
          r=r->next;
      }
      while(r->next!=NULL)
      {
          m=m->next;
          r=r->next;
      }
       ListNode* temp2=m;
       temp2=temp2->next;
       m->next=temp2->next;
       delete(temp2);
       return A;
}
