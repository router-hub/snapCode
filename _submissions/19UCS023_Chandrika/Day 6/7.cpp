ListNode* Solution::deleteDuplicates(ListNode* A) {
    map<int,int>mp;
    ListNode* curr=A;
    while(curr!=NULL)
    {
        mp[curr->val]++;
        curr=curr->next;
    }
    ListNode* dummy=new ListNode(0);
    ListNode* temp=dummy;
    for(auto x:mp)
    {
        if(x.second==1)
        {
            temp->next=new ListNode(x.first);//print only the list with no duplicate values
            temp=temp->next;
        }
    }
    return dummy->next;
}
