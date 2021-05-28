//It can be done by two methods, one by incrementing count0 & count1 while 1 traversal in the linked list .And, then making a dummy head and keep on connecting 0 untill count0 
//becomes 0 and then connecting 1 untill count1 becomes 0.
//If there is some data in the node & we want to preserve the node then this method can be used. Another method uses only one traversal, we keep 2 dummy nodes onehead and 
//zerohead and keep on attaching current node to zerohead if val 0 comes in linkedlist and attaching current node to onehead if val 1 comes in linked list, simultaneously
//updating onehead and zerohead.Then, attach zerohead to start of onehead's list and make next of onehead NULL .Then return start of zerohead.
ListNode* Solution::solve(ListNode* A) {
    int count1=0,count0=0;
    ListNode *temp=A;
    while(temp!=NULL)
    {
        if(temp->val==1)
        {
            count1++;
        }
        else
        {
            count0++;
        }    
     temp=temp->next;
    }
    // cout<<count0<<" "<<count1<<endl;
    ListNode* head=NULL,*tail=NULL;
    while(count0--)
    {
        if(head==NULL)
        {
          ListNode* new_node= new ListNode(0);
          head=tail=new_node;
        }
        else
        {
        ListNode* new_node= new ListNode(0);
        tail->next=new_node;
        tail=tail->next;
        }
    }
    while(count1--)
    {
        if(head==NULL)
        {
          ListNode* new_node= new ListNode(1);
          head=tail=new_node;
        }
        else
        {
        ListNode* new_node= new ListNode(1);
        tail->next=new_node;
        tail=tail->next;
        }
    }
    return head;
    }
    
    
    //2nd method
    
    ListNode* Solution::solve(ListNode* A) {
    
   ListNode *dummy0head=new ListNode(-1);
   ListNode *dummy1head=new ListNode(-1);
   ListNode *start0=dummy0head;
   ListNode *start1=dummy1head;
   if(!A||!A->next)
        return A;
    ListNode *temp=A;
    while(temp!=NULL)
    {
        if(temp->val==0)
        {
            dummy0head->next=temp;
            dummy0head=dummy0head->next;
        }
        else
        {
            dummy1head->next=temp;
            dummy1head=dummy1head->next;
        }
        temp=temp->next;
    }
    dummy0head->next=start1->next;
    dummy1head->next=NULL; //important as then an infinite list may return due to garbage value.
    return start0->next;
}

    
