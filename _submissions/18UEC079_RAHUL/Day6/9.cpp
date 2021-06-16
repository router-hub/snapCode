void findNumbers(vector<int>& ar, int sum, 
                 vector<vector<int> >& res, 
                 vector<int>& r, int i) 
{ 
    // If  current sum becomes negative 
    if (sum < 0) 
        return; 
  
    // if we get exact answer 
    if (sum == 0) 
    { 
        res.push_back(r); 
        return; 
    } 
  
    // Recur for all remaining elements that 
    // have value smaller than sum. 
    if (i < ar.size() && sum - ar[i] >= 0) 
    { 
  
        // Till every element in the array starting 
        // from i which can contribute to the sum 
        r.push_back(ar[i]); // add them to list 
  
        // recur for next numbers 
        findNumbers(ar, sum - ar[i], res, r, i++); 
       // i++; 
  
        // remove number from list (backtracking) 
        r.pop_back(); 
    } 
} 
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

      sort(A.begin(), A.end()); 
  
    // remove duplicates 
    A.erase(unique(A.begin(), A.end()), A.end()); 
  
    vector<int> r; 
    vector<vector<int> > res; 
    findNumbers(A,B, res, r, 0); 
  
    return res; 
}
