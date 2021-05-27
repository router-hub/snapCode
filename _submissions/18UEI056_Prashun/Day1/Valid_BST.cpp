/*
You are given a preorder traversal A, of a Binary Search Tree.

Find if it is a valid preorder traversal of a BST.*/
//code
int Solution::solve(vector<int> &A) {
    int root=INT_MIN;
    stack<int>s;
    for(int i=0;i<A.size();i++)
    { if(A[i]<root) return 0;
     while(!s.empty()&&s.top()<A[i])
        { root=s.top();
            s.pop();
        }
        s.push(A[i]);
    }
    return 1;
}
