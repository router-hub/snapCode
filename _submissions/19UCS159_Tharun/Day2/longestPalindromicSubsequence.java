public class longestPalindromicSubsequence {
  public int solve(String A) {
    int n = A.length();
    int[][] longest = new int[n + 2][n + 2];
    for (int i = 1; i <= n; i++)
      longest[i][i] = 1;
    for (int k = 2; k <= n; k++) {
      int i = 1, j = k;
      while (i <= n && j <= n) {
        if (A.charAt(i - 1) == A.charAt(j - 1)) {
          longest[i][j] = 2 + longest[i + 1][j - 1];
        } else {
          longest[i][j] = Math.max(longest[i][j - 1], longest[i + 1][j]);
        }
        i++;
        j++;
      }
    }
    return longest[1][n];
  }
}
