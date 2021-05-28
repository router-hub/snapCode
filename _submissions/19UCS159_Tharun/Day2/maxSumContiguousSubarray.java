class Solution {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int maxSubArray(final int[] A) {
    int sum = 0, maxSum = A[0];
    for (int e : A) {
      sum += e;
      if (sum < e)
        sum = e;
      maxSum = Math.max(maxSum, sum);
    }
    return maxSum;
  }
}
