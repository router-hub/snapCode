public class repeatingSubSequence {
  public int anytwo(String A) {
    return lcs(A, A) >= 2 ? 1 : 0;
  }

  private int lcs(String A, String B) {
    int n = A.length(), m = B.length();
    int[][] longest = new int[n + 1][m + 1];
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (i != j && A.charAt(i - 1) == B.charAt(j - 1)) {
          longest[i][j] = 1 + longest[i - 1][j - 1];
        } else {
          longest[i][j] = Math.max(longest[i - 1][j], longest[i][j - 1]);
        }
      }
    }
    return longest[n][m];
  }
}
