string Solution::simplifyPath(string A) {
            if(A[0]!='/')
            return "";
            vector<string> vect;
            int i=0;
            while(i<A.size())
            {
                string s="";
                while(i<A.size() && A[i]!='/')
                s+=A[i++];
                ++i;
                if(s=="." || s.empty())
                continue;
                if(s=="..")
                {
                    if(!vect.empty())
                    vect.pop_back();
                    continue;
                }
                if(s.size()>0 )
                vect.push_back(s);
            }
            if(vect.empty())
            return "/";
            string ans="";
            for(auto s:vect)
            ans+="/"+s;
            return ans;
}
