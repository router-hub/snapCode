public class distinctSubSequences {
  public int numDistinct(String A, String B) {
    int n = A.length(), m = B.length();
    int[][] count = new int[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
      count[i][0] = 1;

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        if (A.charAt(i - 1) == B.charAt(j - 1)) {
          count[i][j] = count[i - 1][j - 1];
        }
        count[i][j] += count[i - 1][j];
      }
    }
    return count[n][m];
  }
}
