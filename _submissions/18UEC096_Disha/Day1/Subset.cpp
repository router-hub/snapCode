//There can be 2 choice whether to take a character or not. the stack call decides whether to take the value or not, we keep on fixing 1 value at every stack call. and then
//when we don't need to take the value i.e. take the second choice, we pop it from the curr and then for loop works & explore for further characters
void recurse(vector<vector<int>> &ans,vector<int>&A, vector<int>&curr,int index)
{
    if(index>A.size()-1)
        return;
    
    for(int i=index;i<A.size();i++) //this for loop is for exploring the further characters in the string when recurse call returns and we pop_back from curr
    {
        curr.push_back(A[i]);//here we take the current character-1st choice
         ans.push_back(curr);
        recurse(ans,A,curr,i+1);//it fixes one character at every recursion call
        curr.pop_back();//Here we exclude the current character-2nd choice & through for loop iterate through the remaining characters
    }
}
vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>>ans;
    vector<int>curr;
    ans.push_back(curr);
    recurse(ans,A,curr,0);
    sort(ans.begin(),ans.end());
    return ans;
}

