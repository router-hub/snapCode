ListNode* insert(ListNode* to_place, ListNode* node_of_sorted)
{
    if(!node_of_sorted)
    {
        return to_place;
    }
    if(node_of_sorted->val>=to_place->val)
    {
        to_place->next=node_of_sorted;
        return to_place;
    }
    node_of_sorted->next=insert(to_place,node_of_sorted->next);
    return node_of_sorted;
}

ListNode* Solution::insertionSortList(ListNode* A) {
    ListNode* node_of_sorted=NULL,*temp;
    while(A)
    {
        temp=A;
        A=A->next;
        temp->next=NULL;
        node_of_sorted=insert(temp,node_of_sorted);
    }
    return node_of_sorted;
    
}
