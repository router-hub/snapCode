string Solution::countAndSay(int A) {
    string ans="";
    for(int i=1;i<=A;i++)
    {
        if(i==1)
        {
            ans="1";
        }
        else
        {
            string temp="";
            for(int i=0;i<ans.size();i++)
            {
                int count=1;
                while(ans[i]==ans[i+1])
                {
                    count++;
                    i++;
                }
                temp.push_back('0'+count);
                temp.push_back(ans[i]);
            }
            ans=temp;
        
        }
    }
    return ans;
    
}
