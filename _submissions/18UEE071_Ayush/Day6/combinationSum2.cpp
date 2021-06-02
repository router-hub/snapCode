void recurse(vector<int> &arr, int index, vector<int> temp, int currentSum, int requiredSum, vector<vector<int>> &out)
{
    if (index == arr.size() - 1)
    {
        if (currentSum == requiredSum)
        {
            out.push_back(temp);
        }
        if (currentSum + arr[index] == requiredSum)
        {
            temp.push_back(arr[index]);
            out.push_back(temp);
        }
        return;
    }
    recurse(arr, index + 1, temp, currentSum, requiredSum, out);
    temp.push_back(arr[index]);
    recurse(arr, index + 1, temp, currentSum + arr[index], requiredSum, out);
}
vector<vector<int>> Solution::combinationSum(vector<int> &A, int B)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(), A.end());
    int index = 0;
    vector<int> temp;
    int currentSum = 0;
    int requiredSum = B;
    vector<vector<int>> out;

    recurse(A, index, temp, currentSum, requiredSum, out);

    sort(out.begin(), out.end());
    out.erase(unique(out.begin(), out.end()), out.end());

    return out;
}