string Solution::simplifyPath(string A) {
    vector<string>v;
    stack<string>res;
    string ans="";
    for(int i=0;i<A.size();i++)
    { string temp="";
     while(A[i]!='/' && i<A.size())
     { temp+=A[i];
         i++;
     }
     if(temp!=".." && temp!="." && temp.size()>0) res.push(temp);
     if(temp==".") continue;
     if(temp=="..")
     {if(!res.empty())
         res.pop();
     }
    }
    while(!res.empty())
    { v.push_back(res.top());
        v.push_back("/");
        res.pop();
    }
    
    if(v.size()==0) return "/";
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {   ans+=v[i];
    }
    return ans;
    
}
