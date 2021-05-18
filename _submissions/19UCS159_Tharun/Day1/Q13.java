
/*
Longest Common Subsequence : https://www.interviewbit.com/problems/longest-common-subsequence/

*/

public class Q13 {
  // T=O(n*m)
  public int solve(String A, String B) {
    int n = A.length(), m = B.length();
    int[][] longest = new int[n + 1][m + 1];
    // dp[i][j]=(A[i]==B[j])?(1+dp[i-1][j-1])
    // = dp[i-1][j]
    // = dp[i][j-1]
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        int op1 = longest[i][j - 1], op2 = longest[i - 1][j];
        int op3 = (A.charAt(i - 1) == B.charAt(j - 1)) ? (1 + longest[i - 1][j - 1]) : 0;
        longest[i][j] = Math.max(op1, Math.max(op2, op3));
      }
    }
    return longest[n][m];
  }
}
