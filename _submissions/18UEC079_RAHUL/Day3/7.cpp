/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* a=A;
    ListNode* head=new ListNode(-1);
    ListNode* temp=head;
    vector<int>v;
    while(a!=NULL)
    {
        v.push_back(a->val);
        a=a->next;
    }
    int n=v.size(),i=0;
     sort(v.begin(),v.end());
     //for(int i=0;i<n;i++)
    // cout<<v[i]<<endl;
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
