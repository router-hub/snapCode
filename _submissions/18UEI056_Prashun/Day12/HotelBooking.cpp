
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
       sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int room=K;
    // for (int i=K; i<arrive.size();i++)
    // {
        
    //     // if (arrive[i]<depart[i-K])
    //     //     return false;
        
    // }
    int i=0,j=0;
    int n=arrive.size();
    while(i<n || j<<n)
    {  if(i<n && j<n)
       {  if(arrive[i]<depart[j])
          { if(room==0) return false;
            i++;room--;
          }
          else
           { room++;
               j++;
           }
       }
       else if(i<n)
       { 
           if(room==0) return false;
            i++;room--;
       }
       else
       {
           room++;
               j++;
       }
    }
    return true;
}
