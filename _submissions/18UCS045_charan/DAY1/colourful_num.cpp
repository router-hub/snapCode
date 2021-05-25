int Solution::colorful(int A) {
    vector<int> s;
    set <int> s1;
    int p;
    while(A)
    {
        s.push_back(A%10);
        A=A/10;
    }
    for(int i=0;i<s.size();i++)
    {
        p=1;
        for(int j=i;j<s.size();j++)
        {
            p=p*s[j];
            if(s1.find(p)!=s1.end())
            {
                return 0;
            }
            s1.insert(p);
            
        }
    }
    return 1;
    
}

