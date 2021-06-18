int Solution::kthsmallest(const vector<int> &A, int B) {
    priority_queue<int>pq;
    for(int i=0;i<A.size();i++)
    { pq.push(A[i]);
     if(pq.size()>B)
        pq.pop();
    }
    return pq.top();}
    /*
    O(n2)tc:-
    int len=A.size();
    vector<int>temp(len);
    for(int i=0;i<len;i++)
    { for(int j=i+1;j<len;j++)
        { if(A[i]>=A[j])
            temp[i]+=1;
            else
            temp[j]+=1;
        }
        if(temp[i]==B-1)
         return A[i];
    }
}
