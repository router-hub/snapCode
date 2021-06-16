vector<vector<int>> mothership;
int k;


void printCombinations(vector<int> arr, int i, vector<int> support)
{
     if(i==arr.size()-1)
     {
          if(support.size()==k)
          {
               mothership.push_back(support);
          }
          if(support.size()==k-1)
          {
               support.push_back(arr[i]);
               mothership.push_back(support);     
          }
          return;

     }
     vector<int> temp = support;
     temp.push_back(arr[i]);
     if(support.size()<=k)
     {
          printCombinations(arr,i+1,support);
     }
     if(temp.size()<=k)
     {
          printCombinations(arr,i+1,temp);
     }
     
}
vector<vector<int> > Solution::combine(int A, int B) 
{
    vector<int> temp;
    if(B>A)
    {
        vector<vector<int>> out =  mothership;
    mothership.clear();
    return out;
    }

    
    
    vector<int> arr;
    k=B;
    for(int i=1;i<=A;i++)
    arr.push_back(i);
    
    printCombinations(arr,0,temp);
    vector<vector<int>> out =  mothership;
    sort(out.begin(),out.end());
    mothership.clear();
    return out;
    
    
}
