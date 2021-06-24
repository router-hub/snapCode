public class regularExpressionMatch {
  // DO NOT MODIFY THE ARGUMENTS WITH "final" PREFIX. IT IS READ ONLY
  public int isMatch(final String A, final String B) {
    int n1 = A.length(), n2 = B.length();

    boolean[][] dp = new boolean[n1 + 1][n2 + 1];

    for (int j = 1; j <= n2; j++) {
      if (B.charAt(j - 1) == '*')
        dp[0][j] = true;
      else
        break;
    }
    for (int i = 1; i <= n1; i++) {
      if (A.charAt(i - 1) == '*')
        dp[i][0] = true;
      else
        break;
    }
    dp[0][0] = true;

    for (int i = 1; i <= n1; i++) {
      for (int j = 1; j <= n2; j++) {
        if (A.charAt(i - 1) == '*' || B.charAt(j - 1) == '*') {
          dp[i][j] = dp[i - 1][j] || dp[i][j - 1] || dp[i - 1][j - 1];
        } else if (A.charAt(i - 1) == '?' || B.charAt(j - 1) == '?' || A.charAt(i - 1) == B.charAt(j - 1)) {
          dp[i][j] = dp[i - 1][j - 1];
        } else {
          dp[i][j] = false;
        }
      }
    }

    return dp[n1][n2] ? 1 : 0;
  }

}
