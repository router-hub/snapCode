/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* temp=A,*prev=NULL;
    ListNode* head=new ListNode(-1);
    prev=head;
    int duplicateval =-1;
    vector<int>v;
    bool flag;
    while(temp){
        // flag=false;
        // if(v.empty()){
        //     v.push_back(temp->val);
        // }
        // else{
        //     if(temp->val==v[v.size()-1])
        //      flag=true;
        //      else
        //      {if(flag==true)
        //       v.pop_back();
        //      v.push_back(temp->val);}                            
        // }
        // temp=temp->next;
        if(temp->next==NULL)
        v.push_back(temp->val);
        else 
        {
            if(temp->next->val!=temp->val && prev->val!=temp->val)
            v.push_back(temp->val);
            else
            duplicateval=temp->val;
        }
        prev=temp;
         temp=temp->next;
    }
    if(duplicateval==v[v.size()-1])
      v.pop_back();
            //  if(flag==true)
            //   v.pop_back();
           int i=0,n=v.size();   
            temp=head;
          while(i<n)
     {
         //temp->val=v[i];
         ListNode* t=new ListNode(v[i]);
         //t->val=v[i];
         temp->next=t;
         temp=temp->next;
         i++;
     }
     return head->next;      
              
}
