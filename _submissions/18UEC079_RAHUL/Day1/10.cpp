int Solution::colorful(int A) {
    string s=to_string(A);
    set<long long int>s1;
    int n=s.length();
    for(int i=0;i<n;i++)
    {    string temp="";
        for(int j=i;j<n;j++)
        {
            temp+=s[j];
            long long int sum=1;
            for(int k=0;k<temp.length();k++)
            {
                sum*=temp[k]-'0';
            }
            if(s1.find(sum)!=s1.end())
            return 0;
            else
            s1.insert(sum);
        }
    }
    return 1;
}
