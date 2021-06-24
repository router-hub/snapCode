
ListNode* Solution::subtract(ListNode* A) {
    if(A==NULL) return A;
    vector<int>v;
    ListNode*curr=A;
    while(curr)
    { v.push_back(curr->val);
        curr=curr->next;
    }
    int n=v.size();
    curr=A;
    for(int i=0;i<floor(n/2);i++)
    { curr->val=(v[n-1-i]-v[i]);
        curr=curr->next;
    }
    return A;
}
