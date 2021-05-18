vector<vector<int>> mothership;

void sub(vector<int>a, int i,vector<int> arr)
{
     vector<int> temp =a;
     temp.push_back(arr[i]);
     if(i==arr.size()-1)
     {
                vector<int> temp1=temp;
               vector<int> temp2=a;
               sort(temp1.begin(),temp1.end());
               sort(temp2.begin(),temp2.end());
               mothership.push_back(temp1);
               // temp.push_back(arr[i]);
               mothership.push_back(temp2);
               return;

     }
     sub(temp,i+1,arr);
     sub(a,i+1,arr);
}


vector<vector<int> > Solution::subsets(vector<int> &arr) 
{
    vector<int> a;
    vector<vector<int>> temp;
    
    if(arr.size()==0)
    {
        temp.push_back(a);
        return temp;
    }
    if(arr.size()==1)
    {
        vector<vector<int>> out{a};
        out.push_back(arr);
        return out;
    }
     
     sub(a,0,arr);
     temp = mothership;
     mothership.clear();
     sort(temp.begin(),temp.end());
     
     
     
     return temp;
     
}


