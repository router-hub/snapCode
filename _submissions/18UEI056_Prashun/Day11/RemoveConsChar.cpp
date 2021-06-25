string Solution::solve(string A, int B) {
    
    for(int i=0;i<A.size()-1;i++)
    {  int count=1;
        char c=A[i];
        int j=i+1;
        while(j<A.size()&&count!=B)
        { if(c==A[j])
           { count++;j++;}
            else
            break;
        }
        if(count==B)
        { A.erase(i,B);
            i--;
        }
    }
    return A;
}
