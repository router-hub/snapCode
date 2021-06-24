vector<int> Solution::nextGreater(vector<int> &A) {
    vector<int>ans;
    // reverse(A.begin(),A.end());
    stack<int>s;
    s.push(A[A.size()-1]);
    ans.push_back(-1);
    for(int i=A.size()-2;i>=0;i--)
    { if(s.top()>A[i])
        { ans.push_back(s.top());
            s.push(A[i]);
        }
        else
        {
            while(!s.empty()&&A[i]>=s.top())
            {
                s.pop();
            }
            if(s.empty())
            ans.push_back(-1);
            else ans.push_back(s.top());
            s.push(A[i]);
        }
        
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
